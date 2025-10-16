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
   
使用bag很方便哦： cam_sub.launch.py
	ros2 bag record -o my_camera_bag /ired/ired_cam/ired1/camera_info
	创建一个 my_camera_bag 文件夹，其中包含 .db3 数据库格式的 ROS 2 bag 文件。
	ros2 bag play my_camera_bag 回放/ired/ired_cam/ired1/camera_info，用可视化软件查看
	


   
 *
 */

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>

class ImageSaver : public rclcpp::Node
{
public:
    ImageSaver() : Node("image_saver")
    {
		char* uavid = std::getenv("Uav_id"); // 获取环境变量 PATH
		if (uavid) {
			uav_id = std::stoi(uavid);  // 字符串转换为 int,如果uavid不是字符串会报错
		} else {
			std::cout << "Uav_id 未设置" << std::endl;
			exit(1);  // 程序退出
			
    		}
 /*
	/uav1/depth/camera_info
	/uav1/depth/depth/camera_info
	/uav1/depth/depth/image_raw
	/uav1/depth/image_raw
	/uav1/depth/realsense_plugin/camera/local_pointclouds
	/uav1/ired_cam/ired1/camera_info
	/uav1/ired_cam/ired1/image_raw
	/uav1/ired_cam/ired2/camera_info
	/uav1/ired_cam/ired2/image_raw
 */

		std::string camera_topic = "/uav" + std::to_string(uav_id) + "/depth/image_raw";
        subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            camera_topic, 10,
            std::bind(&ImageSaver::image_callback, this, std::placeholders::_1));
    }

private:
    void image_callback(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        try
        {
            cv::Mat image = cv_bridge::toCvCopy(msg, msg->encoding)->image;

            // 生成带时间戳的文件名
            std::string filename = "image_" + std::to_string(msg->header.stamp.sec) + ".png";
            cv::imwrite(filename, image);

            RCLCPP_INFO(this->get_logger(), "Saved image: %s", filename.c_str());
        }
        catch (const cv_bridge::Exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "CV Bridge error: %s", e.what());
        }
    }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
    int uav_id;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ImageSaver>());
    rclcpp::shutdown();
    return 0;
}

