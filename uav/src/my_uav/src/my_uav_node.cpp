#include "rclcpp/rclcpp.hpp"  // ROS2 C++ 库

// 继承 rclcpp::Node 类，定义一个新的节点
class MyUAVNode : public rclcpp::Node {
public:
    MyUAVNode() : Node("my_uav_node") {  
        RCLCPP_INFO(this->get_logger(), "🚀 my_uav_node已启动！");
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);  // 初始化 ROS2
    auto node = std::make_shared<MyUAVNode>();  // 创建节点对象
    rclcpp::spin(node);  // 运行节点，保持进程不退出
    rclcpp::shutdown();  // 关闭 ROS2
    return 0;
}

