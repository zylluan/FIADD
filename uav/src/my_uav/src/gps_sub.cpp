//多模态模型 使用ROS节点调用模型 将调用模型的脚本编译成ros节点

/*
add_executable(gps_sub src/gps_sub.cpp)
target_link_libraries(gps_sub
  cpr::cpr
)
ament_target_dependencies(gps_sub rclcpp sensor_msgs std_msgs px4_msgs)??
install(TARGETS gps_sub DESTINATION lib/${PROJECT_NAME})
传感器数据 gps

*/
#include <iostream>
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

// ROS2 相关头文件
#include <rclcpp/rclcpp.hpp>
//#include <px4_msgs/msg/vehicle_gps_position.hpp>
#include <px4_msgs/msg/sensor_gps.hpp>
/*多了下面两个包
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
*/



using json = nlohmann::json;

class gps_sub : public rclcpp::Node
{
public:
	explicit gps_sub() : Node("gps_sub")
	{		
		auto qos = rclcpp::QoS(rclcpp::SensorDataQoS());
		
		char* uavid = std::getenv("Uav_id"); // 获取环境变量 PATH
		if (uavid) {
			uav_id = std::stoi(uavid);  // 字符串转换为 int,如果uavid不是字符串会报错
		} else {
			std::cout << "Uav_id 未设置" << std::endl;
			exit(1);  // 程序退出
			
    		}
		std::string gps_topic = "/px4_" + std::to_string(uav_id) + "/fmu/out/vehicle_gps_position";

		sensor_sub_ = this->create_subscription<px4_msgs::msg::SensorGps>(gps_topic, qos, std::bind(&gps_sub::sensor_callback, this, std::placeholders::_1));

		RCLCPP_INFO(this->get_logger(), "gps_sub Node 启动成功，等待收集数据...");
	}	
	
	
	void send_to_ai() 
	{
		if ( last_sensor_data_.empty()) 
		{
			return;  
		}
		
		API_URL = "https://chat.intern-ai.org.cn/api/v1/chat/completions";
		API_KEY = "eyJ0eXBlIjoiSldUIiwiYWxnIjoiSFM1MTIifQ.eyJqdGkiOiI2NDIwMzg3MCIsInJvbCI6IlJPTEVfUkVHSVNURVIiLCJpc3MiOiJPcGVuWExhYiIsImlhdCI6MTc0MjcwNDE4NiwiY2xpZW50SWQiOiJlYm1ydm9kNnlvMG5semFlazF5cCIsInBob25lIjoiMTc1MzcxODM2ODUiLCJvcGVuSWQiOm51bGwsInV1aWQiOiI1YmYwMzQyOS1kMTQ3LTRkMTktOWZiOC1hZGY5ZDZkMzc0MDciLCJlbWFpbCI6IiIsImV4cCI6MTc1ODI1NjE4Nn0.NClX1xAO9N7lhyAhRT6Li3tsFHuRMjTO5R4P33qg669jT88j65if4hPo6MbdJF_PICPgOmqO98OZ-EShzLr6Lw";
		conversation_history.push_back({{"role", "system"},{"content", "你是p450型号无人机的大脑，需要根据无人机获取的各种信息，结合目标任务（可以手动输入），给出无人机下一步操作，如以何种姿态往哪里飞等无人机能执行的操作。"}});
		
		json content_array = json::array();  // 因为content中也有多个{}，也需要确保 `content_array` 是 JSON 数组
		// 添加文本
		content_array.push_back({
			{"type", "text"},	
			{"text", "gps数据"}
		});
		content_array.push_back({
			{"type", "text"},	
			{"text", last_sensor_data_}
		});

		json request_data = {
			{"model", "internvl2.5-latest"},
			{"messages", json::array({
				{
					{"role", "user"}, 
					{"content", content_array}
				}
			})}
		};

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
			RCLCPP_INFO(this->get_logger(), "AI 回复: %s", ai_reply.c_str());
		} else {
			RCLCPP_ERROR(this->get_logger(), "请求失败，状态码: %ld, 错误信息: %s", response.status_code, response.text.c_str());
			//response.status_code是long int 类型，要使用%ld，%d是int
			
		}
		std::cout << "------------------------------------------------ "  << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(10)); // 休眠10秒
	}

private:
	int uav_id;
	rclcpp::Subscription<px4_msgs::msg::SensorGps>::SharedPtr sensor_sub_;

	std::string last_sensor_data_;

	// 数据回调函数
	void sensor_callback(const px4_msgs::msg::SensorGps::SharedPtr msg)
	{
		RCLCPP_INFO(this->get_logger(), "收到gps数据...");
		
		std::string sensor_data = 
			"gps数据:\n"
			"  - 时间戳: " + std::to_string(msg->timestamp) + "\n" +
			"  - Latitude/Longitude in 1E-7 degrees/Altitude in 1E-3 meters above MSL, (millimetres) 分别为: [" +
				std::to_string(msg->lat) + ", " +
				std::to_string(msg->lon) + ", " +
				std::to_string(msg->alt) + ", " + "]\n" ;
		last_sensor_data_ = sensor_data;
		send_to_ai();
	}

	std::string API_URL;
	std::string API_KEY;
	std::vector<json> conversation_history;
	
};

int main(int argc, char *argv[])
{
	std::cout << "Starting gps node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	auto node = std::make_shared<gps_sub>();
	rclcpp::shutdown();
	return 0;
}




