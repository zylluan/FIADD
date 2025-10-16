import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix

class FakeGPSPublisher(Node):
    def __init__(self):
        super().__init__('fake_gps_node')
        self.publisher_ = self.create_publisher(NavSatFix, '/fmu/in/sensor_gps', 10)
        self.timer_ = self.create_timer(0.1, self.publish_fake_gps)

    def publish_fake_gps(self):
        msg = NavSatFix()
        msg.latitude = 39.9    # 欺骗：北京
        msg.longitude = 116.4
        msg.altitude = 500.0
        self.publisher_.publish(msg)
        self.get_logger().info("Publishing fake GPS")

def main():
    rclpy.init()
    node = FakeGPSPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

