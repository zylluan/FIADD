#!/usr/bin/env python3
import rclpy  
from rclpy.node import Node 

import requests
import json

# 创建 ROS2 节点
class MyPythonNode(Node):
    def __init__(self):
        super().__init__('my_python_node')  # 设置节点名称

        self.get_logger().info("🚀 ROS2 Python 节点已启动！")
    
	def ask_internlm(user_input):
		global conversation_history

		# 添加用户输入到对话历史
		conversation_history.append({"role": "user", "content": user_input})

		# 发送请求
		data = {
		    "model": "internlm3-latest",
		    "messages": conversation_history,
		    "temperature": 0.8
		}
		response = requests.post(url, headers=headers, data=json.dumps(data))

		# 解析并返回结果
		if response.status_code == 200:
		    result = response.json()
		    ai_reply = result["choices"][0]["message"]["content"]
		    
		    # 记录 AI 的回复
		    conversation_history.append({"role": "assistant", "content": ai_reply})

		    print("AI_模型回复:", ai_reply)
		else:
		    print("请求失败，状态码：", response.status_code)
		    print("错误信息：", response.text)
    

# 主函数
def main(args=None):
    rclpy.init(args=args)  # 初始化 ROS2
    node = MyPythonNode()  # 创建节点
    rclpy.spin(node)  # 让节点保持运行
    node.destroy_node()  # 退出时清理
    rclpy.shutdown()  # 关闭 ROS2

if __name__ == '__main__':
    main()

