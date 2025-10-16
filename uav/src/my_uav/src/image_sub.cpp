
/*
相机数据 sensor_msgs::msg::Image  /ired/ired_cam/ired1/image_raw
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
#include <sensor_msgs/msg/image.hpp>

/*多了下面两个包
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
*/
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>


using json = nlohmann::json;

class image_sub : public rclcpp::Node
{
public:
	explicit image_sub() : Node("image_sub")
	{		
		char* uavid = std::getenv("Uav_id"); // 获取环境变量 PATH
		if (uavid) {
			uav_id = std::stoi(uavid);  // 字符串转换为 int,如果uavid不是字符串会报错
		} else {
			std::cout << "Uav_id 未设置" << std::endl;
			exit(1);  // 程序退出
			
    		}
		std::string ired1_topic = "/uav" + std::to_string(uav_id) + "/ired_cam/ired1/image_raw";
		auto qos = rclcpp::QoS(rclcpp::SensorDataQoS());
		// 订阅相机、sensor、GPS、雷达数据
		camera_sub_ = this->create_subscription<sensor_msgs::msg::Image>(ired1_topic, qos, std::bind(&image_sub::image_callback, this, std::placeholders::_1));

	}	
	
	
	void send_to_ai() 
	{
		if (last_image_base64_.empty()) 
		{
			return;  
		}
		
		API_URL = "https://chat.intern-ai.org.cn/api/v1/chat/completions";
		API_KEY = "eyJ0eXBlIjoiSldUIiwiYWxnIjoiSFM1MTIifQ.eyJqdGkiOiI2NDIwMzg3MCIsInJvbCI6IlJPTEVfUkVHSVNURVIiLCJpc3MiOiJPcGVuWExhYiIsImlhdCI6MTc0MjcwNDE4NiwiY2xpZW50SWQiOiJlYm1ydm9kNnlvMG5semFlazF5cCIsInBob25lIjoiMTc1MzcxODM2ODUiLCJvcGVuSWQiOm51bGwsInV1aWQiOiI1YmYwMzQyOS1kMTQ3LTRkMTktOWZiOC1hZGY5ZDZkMzc0MDciLCJlbWFpbCI6IiIsImV4cCI6MTc1ODI1NjE4Nn0.NClX1xAO9N7lhyAhRT6Li3tsFHuRMjTO5R4P33qg669jT88j65if4hPo6MbdJF_PICPgOmqO98OZ-EShzLr6Lw";
		
		//这里要改 3.29 
		conversation_history.push_back({{"role", "system"},{"content", "你是p450型号无人机的大脑，需要根据无人机获取的各种信息，结合目标任务（可以手动输入），给出无人机下一步操作，如以何种姿态往哪里飞等无人机能执行的操作。"}});
		
		json content_array = json::array();  // 因为content中也有多个{}，也需要确保 `content_array` 是 JSON 数组
		// 添加文本
		content_array.push_back({
			{"type", "text"},	
			{"text", "这是刚刚你请求调用的相机数据"}
		});
		
		content_array.push_back({
			{"type", "image_url"},
			{"image_url", {{"url", "data:image/jpeg;base64," + last_image_base64_}}}
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
	rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr camera_sub_;

	std::string last_image_base64_;
	
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


	std::string API_URL;
	std::string API_KEY;
	std::vector<json> conversation_history;
	
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
	std::cout << "Starting image_sub node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<image_sub>());

	rclcpp::shutdown();
	return 0;
}




