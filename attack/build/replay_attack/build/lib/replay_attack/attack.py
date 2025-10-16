import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
import json
import time

class GPSReplay(Node):
    def __init__(self):
        super().__init__('gps_replay_node')
        self.publisher_ = self.create_publisher(NavSatFix, '/fmu/in/sensor_gps', 10)
        with open('gps_log.json', 'r') as f:
            self.gps_data = json.load(f)
        self.index = 0
        self.timer = self.create_timer(0.2, self.replay)

    def replay(self):
        if self.index < len(self.gps_data):
            msg = NavSatFix()
            data = self.gps_data[self.index]
            msg.latitude = data['lat']
            msg.longitude = data['lon']
            msg.altitude = data['alt']
            self.publisher_.publish(msg)
            self.index += 1
        else:
            self.get_logger().info("Replay finished.")

def main():
    rclpy.init()
    node = GPSReplay()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

