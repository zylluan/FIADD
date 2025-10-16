/***
*        /px4_1/fmu/out/vehicle_gps_position

***/

#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
//#include "sensor_msgs/msg/nav_sat_fix.hpp"
#include <px4_msgs/msg/sensor_gps.hpp>


using namespace std::chrono_literals;

class FakeGPSPublisher : public rclcpp::Node
{
public:
    FakeGPSPublisher()
    : Node("fake_gps_node")
    {
        publisher_ = this->create_publisher<px4_msgs::msg::SensorGps>("/px4_1/fmu/out/vehicle_gps_position", 10);
        timer_ = this->create_wall_timer(100ms, std::bind(&FakeGPSPublisher::publish_fake_gps, this));
    }

private:
    void publish_fake_gps()
    {
        px4_msgs::msg::SensorGps msg;
        msg.lat = 39.9;     // 伪造位置：北京
        msg.lon = 116.4;
        msg.alt = 500.0;
        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Publishing fake GPS");
    }

    rclcpp::Publisher<px4_msgs::msg::SensorGps>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FakeGPSPublisher>());
    rclcpp::shutdown();
    return 0;
}

