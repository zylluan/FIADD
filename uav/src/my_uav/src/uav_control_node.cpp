#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <nlohmann/json.hpp>
#include <chrono>  //提供了时间和日期相关的功能 直接在create_wall_timer中用100ms
using namespace std::chrono;
using namespace std::chrono_literals;
using json = nlohmann::json;


class UAVControlNode : public rclcpp::Node
{
public:
    UAVControlNode() : Node("uav_control_node")
    {
    	std::string filename = "/home/a/uav/logs/conversation_history.txt";
		file.open(filename, std::ios::app);
		if (file.is_open()) {
			file << "📅️ Time: " << get_current_time() << "\n";
		} else {
			std::cerr << "无法打开文件写入对话" << std::endl;
			exit(1);
		}

		timer_ = this->create_wall_timer(100ms, std::bind(&UAVControlNode::test, this));

        //publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
        //timer_ = this->create_wall_timer(
         //   std::chrono::milliseconds(100),
         //   std::bind(&UAVControlNode::timer_callback, this));
    }
    
    void test()
    {
    	if (file.is_open()) {
			std::cerr << "已经打开文件" << std::endl;
		} else {
			std::cerr << "没打开文件" << std::endl;
			exit(1);
		}

		json request_data = {
		    { "situation_analysis", "当前无人机处于空中，目标点位于正前方10米处，环境无障碍。" },
		    { "candidate_actions", {
		        {
		            { "description", "前进至目标点（0, 10, 0）" },
		            { "score", 0.92 },
		            { "control_calls", {
		                {
		                    { "function", "trajectory_setpoint" },
		                    { "parameters", {
		                        { "target_x", 0.0 },
		                        { "target_y", 10.0 },
		                        { "target_z", 0.0 },
		                        { "target_yaw", 0.0 }
		                    }}
		                }
		            }}
		        }
		    }},
		    { "recommended_action", {
		        { "description", "前进至目标点（0, 10, 0）" },
		        { "reason", "该方向无障碍物，最符合导航目标。" },
		        { "control_calls", {
		            {
		                { "function", "trajectory_setpoint" },
		                { "parameters", {
		                    { "target_x", 0.0 },
		                    { "target_y", 10.0 },
		                    { "target_z", 0.0 },
		                    { "target_yaw", 0.0 }
		                }}
		            }
		        }}
		    }},
		    { "px4_command", "ros2 run px4_ros_com offboard_control_mode --ros-args -p pos:=true -p vel:=false -p acc:=false -p att:=false -p body_rate:=false -p actuator:=false && ros2 run px4_ros_com trajectory_setpoint --ros-args -p target_x:=0.0 -p target_y:=10.0 -p target_z:=0.0 -p target_yaw:=0.0 -p vel_x:=0.0 -p vel_y:=0.0 -p vel_z:=0.0 -p acc_x:=0.0 -p acc_y:=0.0 -p acc_z:=0.0" }
		};
		std::string json_string = request_data.dump(4);
		RCLCPP_INFO(this->get_logger(), "AI 回复: %s", json_string.c_str());
		json content_array = json::array();  // 因为content中也有多个{}，也需要确保 `content_array` 是 JSON 数组
		// 添加文本
		content_array.push_back({
			{"type", "text"},	
			{"text", "ray_data"}
		});
		content_array.push_back({
			{"type", "text"},	
			{"text", "last_lidar_data_"}
		});
		file << "👉️[user]  " << content_array.dump(4) << "\n\n";
		file << "👉️[assistant]  " << json_string << "\n\n";
		//append_new_messages_to_file(content_array);
		//append_new_messages_to_file(json_string);
		
		std::string command_string = parse_model_reply(json_string);
		std::cout << "指令： " << command_string << std::endl;
    	std::vector<std::string> commands = split_px4_commands(command_string);
    	std::cout << "指令个数: " << commands.size() << std::endl;
		for (const auto& cmd : commands) {
			std::cout << "单独指令: " << cmd << std::endl;
		}
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
	// 分割函数
	std::vector<std::string> split_px4_commands(const std::string& input) {
		std::vector<std::string> commands;
		size_t start = 0;
		size_t pos;

		while ((pos = input.find("&&", start)) != std::string::npos) {
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
		return 0;
	}
	
	//追加每一次的对话内容进入txt文件中
	void append_new_messages_to_file(const json& msg, const std::string& filename = "/home/a/uav/logs/conversation_history.txt") {
		std::ofstream file(filename, std::ios::app);  // 以追加模式打开
		if (file.is_open()) {
			file << "Time: " << get_current_time() << "\n";
			file << "👉️[user]  " << msg.dump(4) << "\n\n";
			file.close();
			std::cout << "已追加当前对话至 " << filename << std::endl;
		} else {
			std::cerr << "无法打开文件写入对话" << std::endl;
		}
	}
	void append_new_messages_to_file(const std::string& m, const std::string& filename = "/home/a/uav/logs/conversation_history.txt") {
		std::ofstream file(filename, std::ios::app);  // 以追加模式打开
		if (file.is_open()) {
			file << "Time: " << get_current_time() << "\n";
			file << "👉️[assistant]  " << m << "\n\n";
			file.close();
			std::cout << "已追加当前对话至 " << filename << std::endl;
		} else {
			std::cerr << "无法打开文件写入对话" << std::endl;
		}
	}
	
	std::string get_current_time() {
		// 获取当前时间
		auto now = std::chrono::system_clock::now();
		std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
		
		// 将时间格式化为字符串
		std::tm now_tm = *std::localtime(&now_time_t);
		std::stringstream ss;
		ss << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S");
		return ss.str();
	}
	
	~UAVControlNode() {
	// 析构函数中关闭文件
		if (file.is_open()) {
		    file.close();
		    std::cout << "File closed." << std::endl;
		}
	}

private:
    void timer_callback()
    {
        auto message = geometry_msgs::msg::Twist();
        message.linear.x = 1.0;  // 线性速度
        publisher_->publish(message);
    }
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::ofstream file;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);


    rclcpp::spin(std::make_shared<UAVControlNode>());
    rclcpp::shutdown();
    return 0;
}

