/*
雷达数据 (sensor_msgs::msg::LaserScan)：  /lidar_2D/laserscan
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
#include <sensor_msgs/msg/laser_scan.hpp>
/*多了下面两个包
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
*/



using json = nlohmann::json;

class ray_sub : public rclcpp::Node
{
public:
	explicit ray_sub() : Node("ray_sub")
	{	
		char* uavid = std::getenv("Uav_id"); // 获取环境变量 PATH
		if (uavid) {
			uav_id = std::stoi(uavid);  // 字符串转换为 int,如果uavid不是字符串会报错
		} else {
			std::cout << "Uav_id 未设置" << std::endl;
			exit(1);  // 程序退出
			
    		}	
		auto qos = rclcpp::QoS(rclcpp::SensorDataQoS());
		std::string lidar_topic = "/uav" + std::to_string(uav_id) + "/laserscan";
		lidar_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(lidar_topic, qos, std::bind(&ray_sub::lidar_callback, this, std::placeholders::_1));

		RCLCPP_INFO(this->get_logger(), "Internvl Node 启动成功，等待收集数据...");
	}	
	
	
	void send_to_ai() 
	{
		if (last_lidar_data_.empty()) 
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
			{"text", "这是刚才你请求调用的雷达数据"}
		});
		content_array.push_back({
			{"type", "text"},	
			{"text", last_lidar_data_}
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
	rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr lidar_sub_;

	std::string last_lidar_data_;
	
	void lidar_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg) {
		std::ostringstream oss;
		oss << "雷达数据 - 最近障碍物: " << *std::min_element(msg->ranges.begin(), msg->ranges.end()) << "米";
		last_lidar_data_ = oss.str();
		send_to_ai();
	}
	
	
	
	
	std::string API_URL;
	std::string API_KEY;
	std::vector<json> conversation_history;
	
};

int main(int argc, char *argv[])
{
	std::cout << "Starting ray_sub node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<ray_sub>());

	rclcpp::shutdown();
	return 0;
}




