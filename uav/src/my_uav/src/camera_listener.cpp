/**
 * /ired/ired_cam/ired1/image_raw
   /ired/ired_cam/ired2/image_raw
   /depth/image_raw
   /depth/depth/image_raw
   
   /depth/realsense_plugin/camera/local_pointclouds
   
   /ired/ired_cam/ired1/camera_info
   /ired/ired_cam/ired2/camera_info
   /depth/camera_info
   /depth/depth/camera_info
   
header:（std_msgs/Header）
  stamp:                         header.stamp：图像采集时间戳（sec 和 nanosec）
    sec: 1700000000
    nanosec: 123456789
  frame_id: "camera_link"       相机的坐标系
height: 480  （uint32）                 图像高度（行数，单位：像素）
width: 640    （uint32） 
encoding: "rgb8"            描述图像数据格式 string
				rgb8（RGB 三通道，每通道 8-bit）

				bgr8（BGR 三通道，每通道 8-bit，OpenCV 默认格式）

				mono8（灰度图，每像素 8-bit）

				mono16（灰度图，每像素 16-bit）

				yuv422（YUV 4:2:2 格式）

				rgba8 / bgra8（RGBA 格式）
is_bigendian: 0    （uint8）             
step: 1920   # 640 像素 * 3字节(RGB)  （uint32）
data: [255, 0, 0, 255, 0, 0, ...]  # RGB 像素数据 每像素 3 字节  （uint8[]）
				is_bigendian：是否使用大端序（0 = 小端，1 = 大端）

				step：每行的字节数（width * 每个像素占用字节数）

				data：实际的图像数据（数组）
   
 *
 */



#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <fstream>


class ImageListener  : public rclcpp::Node
{
public:
	explicit ImageListener() : Node("Image_Listener")
	{	
	
		char* uavid = std::getenv("Uav_id"); // 获取环境变量 PATH
		if (uavid) {
			uav_id = std::stoi(uavid);  // 字符串转换为 int,如果uavid不是字符串会报错
		} else {
			std::cout << "Uav_id 未设置" << std::endl;
			exit(1);  // 程序退出
			
    		}
		std::string ired1_topic = "/uav" + std::to_string(uav_id) + "/ired_cam/ired1/image_raw";	
		rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
		auto qos = rclcpp::QoS(rclcpp::QoSInitialization(qos_profile.history, 5), qos_profile);
		subscription_ = this->create_subscription<sensor_msgs::msg::Image>(ired1_topic, qos, std::bind(&ImageListener::image_callback, this, std::placeholders::_1));

	}

private:
	int uav_id;
	rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
	
	void image_callback(const sensor_msgs::msg::Image::SharedPtr msg)
	{
		std::ofstream log_file("image_log.bin", std::ios::binary | std::ios::app);
		if (!log_file)
		{
			RCLCPP_ERROR(this->get_logger(), "Failed to open log file!");
			return;
		}

		// 记录时间戳
		log_file << "Timestamp: " << msg->header.stamp.sec << "." << msg->header.stamp.nanosec << "\n";

		// 记录图片信息
		log_file << "Width: " << msg->width << " Height: " << msg->height
			 << " Encoding: " << msg->encoding << " Step: " << msg->step << "\n";

		// 写入图像数据
		log_file.write(reinterpret_cast<const char *>(msg->data.data()), msg->data.size());
		log_file << "\n";

		log_file.close();
		RCLCPP_INFO(this->get_logger(), "Image data saved to log.");
	}

};

int main(int argc, char *argv[])
{
	std::cout << "Starting Image listener node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<ImageListener>());

	rclcpp::shutdown();
	return 0;
}
