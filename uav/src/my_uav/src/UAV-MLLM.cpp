//多模态模型 使用ROS节点调用模型 将调用模型的脚本编译成ros节点

/*
相机数据 sensor_msgs::msg::Image  /ired/ired_cam/ired1/image_raw
传感器数据 sensor_combined  （gps）
雷达数据 (sensor_msgs::msg::LaserScan)：  /lidar_2D/laserscan
*/
#include <iostream>
#include <cstdlib>  
#include <vector>
#include <string>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <fstream>
#include <sstream>
#include <openssl/bio.h>
#include <openssl/buffer.h>
#include <openssl/evp.h>

#include <thread>
#include <chrono>

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <px4_msgs/msg/sensor_combined.hpp>

#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>


using json = nlohmann::json;

class InternvlNode : public rclcpp::Node
{
public:
	explicit InternvlNode() : Node("internvl_node")
	{		
		//打开log文件
		std::string filename = "/home/a/uav/logs/conversation_history.txt";
		file.open(filename, std::ios::app); 
		if (file.is_open()) {
			file << "📅️ Time: " << get_current_time() << "\n";
		} else {
			std::cerr << "无法打开文件写入对话" << std::endl;
			exit(1);
		}
		char* uavid = std::getenv("Uav_id"); // 获取环境变量 PATH
		if (uavid) {
			uav_id = std::stoi(uavid);  // 字符串转换为 int,如果uavid不是字符串会报错
		} else {
			std::cout << "Uav_id 未设置" << std::endl;
			exit(1);  // 程序退出
			
    		}

		auto qos = rclcpp::QoS(rclcpp::SensorDataQoS());
		// 订阅相机、sensor、GPS、雷达数据
		std::string camera_topic = "/uav" + std::to_string(uav_id) + "/ired_cam/ired1/image_raw";
		camera_sub_ = this->create_subscription<sensor_msgs::msg::Image>(camera_topic, qos, std::bind(&InternvlNode::image_callback, this, std::placeholders::_1));

		std::string lidar_topic = "/uav" + std::to_string(uav_id) + "/laserscan";	
		lidar_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(lidar_topic, qos, std::bind(&InternvlNode::lidar_callback, this, std::placeholders::_1));
		
		std::string SensorCombined_topic = "/px4_" + std::to_string(uav_id) + "/fmu/out/sensor_combined";
		sensor_sub_ = this->create_subscription<px4_msgs::msg::SensorCombined>(SensorCombined_topic, qos, std::bind(&InternvlNode::sensor_callback, this, std::placeholders::_1));

		RCLCPP_INFO(this->get_logger(), "Internvl Node 启动成功，等待收集数据...");
		
		//多轮对话时，这个加载一次就行
		conversation_history.push_back({{"role", "system"},{"content", full_prompt}});
	}	
	
	
	void send_to_ai() 
	{
		if (last_image_base64_.empty() || last_sensor_data_.empty() || last_lidar_data_.empty()) 
		{
			return;  // 等待所有数据到齐
		}
		std::cout << "所有数据到齐 " << std::endl;
		API_URL = "https://chat.intern-ai.org.cn/api/v1/chat/completions";
		API_KEY = "your_KEY";
		//conversation_history.push_back({{"role", "system"},{"content", full_prompt}});
		//std::cout << prompt << std::endl;
		json content_array = json::array();  // 因为content中也有多个{}，也需要确保 `content_array` 是 JSON 数组
		// 添加文本
		content_array.push_back({
			{"type", "text"},	
			{"text", last_sensor_data_}
		});
		content_array.push_back({
			{"type", "text"},	
			{"text", last_lidar_data_}
		});
		
		content_array.push_back({
			{"type", "image_url"},
			{"image_url", {{"url", "data:image/jpeg;base64," + last_image_base64_}}}
		});
		
		//{"content", json::array({
//	    				{{"type", "text"}, {"text", last_sensor_data_}},
//	    				{{"type", "text"}, {"text", last_lidar_data_}},
//	    				{{"type", "image_url"}, {"image_url", {{"url", "data:image/jpeg;base64," + last_image_base64_}}}}
//				})}

		conversation_history.push_back({
			{"role", "user"},
			{"content", content_array}
		});
		
		file << "👉️[user]  " << content_array.dump(4) << "\n\n"; //将输入 记入conversation_h.txt
		//append_new_messages_to_file(content_array);  //将来自用户/无人机的输入记入conversation_h.txt
		
		json request_data = {
			{"model", "internvl2.5-latest"},
			{"messages", conversation_history}
		};
		//调模型
		cpr::Response response = cpr::Post(
			cpr::Url{API_URL},
			cpr::Header{
				{"Content-Type", "application/json"}, 
				{"Authorization", "Bearer " + API_KEY}},
			cpr::Body{request_data.dump()}
		);
		
		if (response.status_code == 200) {
			json result = json::parse(response.text);
			std::string ai_reply = result["choices"][0]["message"]["content"];
			//加入历史上下文记录
			conversation_history.push_back({
				{"role", "assistant"},
				{"content", ai_reply}
			});
			RCLCPP_INFO(this->get_logger(), "💬️AI 回复: %s", ai_reply.c_str());
			//存模型的回答
			file << "👉️[assistant]  " << ai_reply << "\n\n";
			//append_new_messages_to_file(ai_reply);
				//提取指令
			std::string command_string = parse_model_reply(ai_reply); //没提取到，会返回一个空指针，报错
				//分割指令
			std::vector<std::string> commands = split_px4_commands(command_string);
			std::cout << "px4_command 中包含  " << commands.size() << "条指令：" << std::endl;
				//处理每条指令
			for (const auto& cmd : commands) {
				std::cout << "👉 " << cmd << std::endl;
				//run_ros2_command(com);
			}
		} else {
			RCLCPP_ERROR(this->get_logger(), "请求失败，状态码: %ld, 错误信息: %s", response.status_code, response.text.c_str());//response.status_code是long int 类型，要使用%ld，%d是int	
		}
		std::cout << "------------------------------------------------ "  << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(10)); // 休眠10秒
	}
	
	//提取出px4_command
	std::string parse_model_reply(const std::string& ai_reply) {
		try {
			nlohmann::json parsed = nlohmann::json::parse(ai_reply);
			
			if (parsed.contains("px4_command")) {
				//std::string command_string = parsed["px4_command"];
				return parsed["px4_command"];
			} else {
				std::cerr << "未找到 'px4_command' 字段！" << std::endl;
			}
		} catch (const std::exception& e) {
			std::cerr << "解析模型输出失败: " << e.what() << std::endl;
		}
		std::cerr << " return 0，这样返回空指针给一个string类型，就会报错哦！ " << std::endl;
		return 0;
	}
	
	// 去除前后空格的工具函数
	std::string trim(const std::string& s) {
	    auto start = s.begin();
	    while (start != s.end() && std::isspace(*start)) {
		++start;
	    }
	    auto end = s.end();
	    do {
		--end;
	    } while (std::distance(start, end) > 0 && std::isspace(*end));
	    return std::string(start, end + 1);
	}
	// 分割函数 使用input.find(...) 和 input.substr(...)
	std::vector<std::string> split_px4_commands(const std::string& input) {
		std::vector<std::string> commands;
		size_t start = 0;  // 用于记录当前处理的位置，初始化为0
		size_t pos;   // 用于存储找到的 "&&" 的位置
		 // 使用 while 循环查找 "&&" 分隔符，并将命令分割出来
		while ((pos = input.find("&&", start)) != std::string::npos) {  //input.find("&&", start) 从 start位置开始找"&&"，返回"&&"起始位置，找不到就返回 std::string::npos。
			// 找到 "&&" 后，从 start 到 pos 的子串是一个完整的命令
		    std::string cmd = input.substr(start, pos - start);
		    commands.push_back(trim(cmd));
		    start = pos + 2; // 跳过 "&&"
		}

		// 添加最后一条命令（或者唯一一条）
		if (start < input.size()) {
		    commands.push_back(trim(input.substr(start)));
		}

		return commands;
	}
		
	//追加用户输入的内容json数据进入conversation_history.txt文件中（在该函数中先open文件，追加后close文件）
	void append_new_messages_to_file(const json& msg, const std::string& filename = "/home/a/uav/logs/conversation_history.txt") {
		std::ofstream file(filename, std::ios::app);  // 以追加模式打开
		if (file.is_open()) {
			file << "[user] 👉️ " << msg.dump(4) << "\n\n";
			file.close();
			std::cout << "已追加当前对话至 " << filename << std::endl;
		} else {
			std::cerr << "无法打开文件写入对话" << std::endl;
		}
	}
	//追加模型输出内容string ai_reply进入conversation_history.txt文件中（该函数先open文件，追加后close文件）
	void append_new_messages_to_file(const std::string& m, const std::string& filename = "/home/a/uav/logs/conversation_history.txt") {
		std::ofstream file(filename, std::ios::app);  // 以追加模式打开
		if (file.is_open()) {
			file << "[assistant] 👉️ " << m << "\n\n";
			file.close();
			std::cout << "已追加当前对话至 " << filename << std::endl;
		} else {
			std::cerr << "无法打开文件写入对话" << std::endl;
		}
	}
	
	//获取当前时间
	std::string get_current_time() {
		auto now = std::chrono::system_clock::now();
		std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
		
		// 将时间格式化为字符串
		std::tm now_tm = *std::localtime(&now_time_t);
		std::stringstream ss;
		ss << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S");
		return ss.str();
	}

	~InternvlNode() {
	// 析构函数中关闭文件
		if (file.is_open()) {
			file << "-------------------------------------------------------------- " << "\n\n";
			file.close();
			std::cout << "File closed." << std::endl;
		}
	}

private:
	int uav_id;
	std::ofstream file; //用于管理log文件
	std::string API_URL;
	std::string API_KEY;
	std::vector<json> conversation_history;
	//prompt 将 prompt 分为以下几个部分定义成 std::string，然后在运行时拼接：	
	//任务定义块（任务类型 + 目标）
	std::string task_definition = R"(Act as the intelligent brain of a drone operating within a self-organizing UAV network.Based on the following sensor data, analyze the drone's current status and determine the next optimal action. 
The drone may perform one of the following tasks:
1. Navigation Task: Fly to a specific GPS or local coordinate.
2. Reconnaissance Task: Search for a specific object or scan a designated area.
3. Cooperative Task: Collaborate with other drones in the network to perform tasks such as synchronized patrolling, zone coverage, or data relay.
)";
	//输入数据块（包含所有传感器数据）无人机可能的传感器输入类型
	std::string sensor_input = R"(Sensor input includes but is not limited to:
- Image data (e.g., for object or scene recognition)
- 2D LiDAR data (e.g., for obstacle detection)
- PX4 IMU data from px4_msgs/msg/sensor_combined.hpp (e.g., acceleration, gyroscope)
- GPS data (e.g., latitude, longitude, altitude)
)";
	//行为要求块（要模型做什么）根据输入，无人机至少要给出如下内容的分析：
	std::string behavior_request = R"(You must:
1. Provide a brief situation analysis (e.g., is the drone in danger, off-course, or low on battery).
2. Propose at least two candidate actions with a score for each (based on safety, efficiency, and mission goal).
3. Recommend one final action and explain why.
4. List required control function calls to perform the final action.
5. Output a PX4 executable command in ros2 CLI format.
)";	
	//函数接口块（模型可以调用哪些控制函数）
	std::string function_interfaces = R"(Available control functions:
- Arm(float armid): armid = 1.0 to arm, 0.0 to disarm.
- offboard_control(): switch to offboard mode.
- offboard_control_mode(bool pos, bool vel, bool acc, bool att, bool body_rate, bool actuator): set external control behavior.
- trajectory_setpoint(float target_x, float target_y, float target_z, float target_yaw, float vel_x, float vel_y, float vel_z, float acc_x, float acc_y, float acc_z): set target state.
- vel_yaw(float angle, float vel): adjust yaw and velocity.
)";
	//输出格式块（JSON结构定义）
/*
{
  "状态分析": "...",
  "动作候选": [
    {
      "动作描述": "...",
      "评分": 评分值,
      "控制函数调用": [
        {
          "函数": "函数名",
          "参数": { "参数1": 值, "参数2": 值 }
        }
      ]
    }
  ],
  "最终推荐动作": {
    "动作描述": "...",
    "理由": "...",
    "控制函数调用": [
      {
        "函数": "函数名",
        "参数": { "参数1": 值, "参数2": 值 }
      }
    ]
  },
  "PX4执行指令": "ros2 run px4_ros_com 函数名 --ros-args -p 参数1:=参数值 -p 参数2:=参数值 ..."
}

*/
	std::string output_format = R"(Use the following structured JSON output format:
{
  "situation_analysis": "...",
  "candidate_actions": [
    {
      "description": "...",
      "score": number,
      "control_calls": [
        {
          "function": "function_name",
          "parameters": { "param1": value, "param2": value }
        }
      ]
    }
  ],
  "recommended_action": {
    "description": "...",
    "reason": "...",
    "control_calls": [
      {
        "function": "function_name",
        "parameters": { "param1": value, "param2": value }
      }
    ]
  },
  "px4_command": "ros2 run px4_ros_com FUNCTION_NAME --ros-args -p PARAM1:=value -p PARAM2:=value ...", Only include parameters that differ from default values (false for booleans, 0.0 for floats) in the ros2 command.
}
)";
	std::string full_prompt = task_definition + "\n" +
                          sensor_input + "\n" +
                          behavior_request + "\n" +
                          function_interfaces + "\n" +
                          output_format;

	rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr camera_sub_;
	rclcpp::Subscription<px4_msgs::msg::SensorCombined>::SharedPtr sensor_sub_;
	//rclcpp::Subscription<sensor_msgs::msg::NavSatFix>::SharedPtr gps_sub_;
	rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr lidar_sub_;
	
	std::string last_image_base64_;
	std::string last_sensor_data_;
	std::string last_lidar_data_;
	
	//提取出模型输出的指令后，直接通过该函数执行指令
	void run_ros2_command(std::string com="ros2 run px4_ros_com arm --ros-args -p armid:=1.0"){
		std::string command=com;
		int result = std::system(command.c_str());
		 // 检查命令是否成功执行
		if (result == 0) {
		    std::cout << "命令成功执行" << std::endl;
		} else {
		    std::cout << "命令执行失败，错误代码：" << result << std::endl;
		}
	}
	
	void image_callback(const sensor_msgs::msg::Image::SharedPtr msg) {
	    try {
		// 确保数据有效
		if (msg->data.empty()) {
		    RCLCPP_WARN(this->get_logger(), "接收到的图像数据为空！");
		    return;
		}
		// 判断通道数
		int channels = (msg->encoding == "mono8") ? 1 : ((msg->encoding == "bgr8" || msg->encoding == "rgb8") ? 3 : 0);
		if (channels == 0) {
		    RCLCPP_ERROR(this->get_logger(), "不支持的图像编码: %s", msg->encoding.c_str());
		    return;
		}
		// 将 ROS Image 转换为 OpenCV Mat
		cv::Mat img(msg->height, msg->width, (channels == 1) ? CV_8UC1 : CV_8UC3, const_cast<uint8_t*>(msg->data.data()), msg->step);
		// 如果是 `rgb8`，转换为 `bgr8`
		if (msg->encoding == "rgb8") {
		    cv::cvtColor(img, img, cv::COLOR_RGB2BGR);
		}
		// 编码为 JPEG 格式
		std::vector<uchar> buf;
		cv::imencode(".jpg", img, buf);
		// 转换为 Base64
		last_image_base64_ = encodeBase64(buf);
		send_to_ai();  // 触发 AI 请求
	    } catch (const std::exception& e) {
		RCLCPP_ERROR(this->get_logger(), "图像处理异常: %s", e.what());
	    }
	}
	// 传感器数据回调函数
	void sensor_callback(const px4_msgs::msg::SensorCombined::SharedPtr msg)
	{
		//RCLCPP_INFO(this->get_logger(), "收到传感器数据...");
		// 将传感器数据格式化为字符串，作为 AI 的输入
		std::string sensor_data = 
			"传感器数据:\n"
			"  - 时间戳: " + std::to_string(msg->timestamp) + "\n" +
			"  - 角速度(rad/s): [" +
				std::to_string(msg->gyro_rad[0]) + ", " +
				std::to_string(msg->gyro_rad[1]) + ", " +
				std::to_string(msg->gyro_rad[2]) + "]\n" +
			"  - IMU数据,线性加速度(m/s²): [" +
				std::to_string(msg->accelerometer_m_s2[0]) + ", " +
				std::to_string(msg->accelerometer_m_s2[1]) + ", " +
				std::to_string(msg->accelerometer_m_s2[2]) + "]\n";
		last_sensor_data_ = sensor_data;
		send_to_ai();
	}
	//雷达数据回调函数
	void lidar_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg) {
		std::ostringstream oss;
		oss << "雷达数据-最近障碍物: " << *std::min_element(msg->ranges.begin(), msg->ranges.end()) << "米";
		last_lidar_data_ = oss.str();
		send_to_ai();
	}
	
	std::string encodeBase64(const std::vector<uchar>& data) {
		BIO* bio = BIO_new(BIO_f_base64());
		BIO* mem = BIO_new(BIO_s_mem());
		BIO_set_flags(bio, BIO_FLAGS_BASE64_NO_NL);
		bio = BIO_push(bio, mem);
		BIO_write(bio, data.data(), data.size());
		BIO_flush(bio);

		BUF_MEM* bufferPtr;
		BIO_get_mem_ptr(bio, &bufferPtr);
		std::string encodedData(bufferPtr->data, bufferPtr->length);
		BIO_free_all(bio);
		return encodedData;
	}
};

int main(int argc, char *argv[])
{
	std::cout << "Starting InternvlNode node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<InternvlNode>());
	rclcpp::shutdown();
	return 0;
}




