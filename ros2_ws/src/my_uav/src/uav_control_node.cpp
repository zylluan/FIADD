#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

class UAVControlNode : public rclcpp::Node
{
public:
    UAVControlNode() : Node("uav_control_node")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&UAVControlNode::timer_callback, this));
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
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<UAVControlNode>());
    rclcpp::shutdown();
    return 0;
}

