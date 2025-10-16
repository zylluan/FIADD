/**
 *hokuyo_ust_20lx.  捕获的数据在topic：/lidar_2D/laserscan
 * output_type：sensor_msgs/LaserScan
   /opt/ros/galactic/share/sensor_msgs/msg/LaserScan.msg
   
   /opt/ros/galactic/include/sensor_msgs/msg/laser_scan.hpp
   
std_msgs/Header header	 Header	消息头部，包含时间戳 stamp 和 frame_id（坐标系）
					 timestamp是扫描第一条射线的采集时间
					 在frame中，angle是围绕正Z轴测量的（逆时针，如果Z是向上的），零角度是沿着x轴向前测量的
float32 angle_min	float32	扫描起始角度（弧度），相对 x 轴
float32 angle_max	float32	扫描结束角度（弧度），相对 x 轴
float32 angle_increment	float32	每个测量点的角度间隔（弧度）
float32 time_increment	float32	每个测量点之间的时间间隔（秒）
float32 scan_time	float32	一次完整扫描所需时间（秒）
float32 range_min	float32	最小测量范围（米），小于该值的数据应被丢弃
float32 range_max	float32	最大测量范围（米），大于该值的数据应被丢弃
float32[] ranges	float32 数组	测量的距离数据（米），对应扫描角度
根据angle_min和angle_increment，计算ranges[i]对应的坐标(x,y)，x-cos，y-sin
float32[] intensities	float32 数组	测量点的反射强度（单位因设备而异，可为空）
 
 *        .
 *
 */

#include <rclcpp/rclcpp.hpp>
#include "sensor_msgs/msg/laser_scan.hpp"
#include <fstream>
#include <iomanip>


class LaserScanListener : public rclcpp::Node
{
public:
	explicit LaserScanListener() : Node("LaserScan_listener")
	{	
		char* uavid = std::getenv("Uav_id"); // 获取环境变量 PATH
		if (uavid) {
			uav_id = std::stoi(uavid);  // 字符串转换为 int,如果uavid不是字符串会报错
		} else {
			std::cout << "Uav_id 未设置" << std::endl;
			exit(1);  // 程序退出
			
    		}

	
		rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
		auto qos = rclcpp::QoS(rclcpp::QoSInitialization(qos_profile.history, 5), qos_profile);
		
		std::string lidar_topic = "/uav" + std::to_string(uav_id) + "/laserscan";
		subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>(lidar_topic, qos,  std::bind(&LaserScanListener::scan_callback, this, std::placeholders::_1));
		
	}
	
	~LaserScanListener()
	{
		if (log_file_.is_open())
		{
		    log_file_.close();
		}
	}

private:
	int uav_id;
	rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
	std::ofstream log_file_;
	
	void scan_callback(const sensor_msgs::msg::LaserScan::UniquePtr msg)
	{
		log_file_.open("lidar_log.txt", std::ios::out | std::ios::app);
		if (!log_file_.is_open())
		{
		    RCLCPP_ERROR(this->get_logger(), "Failed to open log file!");
		    return;
		}
		
		log_file_ << "==== lidar数据日志开始 ====\n";
		std::cout << "==== lidar数据日志开始记录 ===="   << std::endl;
		
		// 获取当前系统时间
		auto now = std::time(nullptr);
		auto local_time = *std::localtime(&now);
		log_file_ << std::put_time(&local_time, "[%Y-%m-%d %H:%M:%S] ") << " lidar DATA:\n";
		
		log_file_ << "Timestamp: " << msg->header.stamp.sec << "." << msg->header.stamp.nanosec << "\n";
		log_file_ << "angle_min: " << msg->angle_min << " rad, angle_increment: " << msg->angle_increment << " rad\n";
		log_file_ << "Ranges: ";
		for (const auto &range : msg->ranges)
		{
			log_file_ << std::fixed << std::setprecision(2) << range << " ";
		}
		log_file_ << "\nIntensities: ";
		for (const auto &intensity : msg->intensities)
		{
		    log_file_ << std::fixed << std::setprecision(2) << intensity << " ";
		}
		log_file_ << "\n---------------------------\n";
		log_file_.flush();
		
		
		RCLCPP_INFO(this->get_logger(), "Received LaserScan: angle_min = %f, angle_increment = %f, range[0] = %f,range[1] = %f",
		msg->angle_min, msg->angle_increment, msg->ranges[0],msg->ranges[0]);
	}

};

int main(int argc, char *argv[])
{
	std::cout << "Starting LaserScan Listener node..." << std::endl;
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<LaserScanListener>());

	rclcpp::shutdown();
	return 0;
}
