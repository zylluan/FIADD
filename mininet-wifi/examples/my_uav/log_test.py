#!/usr/bin/python3

import sys

from mininet.log import setLogLevel, info
from mn_wifi.link import wmediumd, adhoc
from mn_wifi.manetRoutingProtocols import olsrd
from mn_wifi.cli import CLI
from mn_wifi.net import Mininet_wifi
from mn_wifi.wmediumdConnector import interference
import random, time

import threading
import os

sys.path.append("/home/a/mininet-wifi/examples/my_uav/attack")
from ddos_hping3 import ddos_attack

# ---------------- 日志函数 ----------------
def _log(self, log_file, message):
	timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
	log_msg = f"[{timestamp}] {message}"
	print(log_msg)
	with open(self.log_file, "a") as f:
		f.write(log_msg + "\n")

# 定义两分钟通信函数
def start_traffic_cmd():
	"""两分钟随机收发数据包测试"""
	print("\n*** 开始随机收发数据包测试 ***\n")
	start_time = time.time()
	i = 0
	while time.time() - start_time < 20:
		i += 1
		#print(f"[{time.strftime('%H:%M:%S')}] {src.name} -> {dst.name} 发送{pkt_count} 个包")  
		output = 'sudo tc qdisc add dev wlan0 parent 1:10 handle 10: pfifo_fast'
		output2 = 'sudo iptables -A INPUT -p udp --dport 14550 -j DROP'
		#print(output)  # 打印到终端
		logfile = f'/home/a/mininet-wifi/zy_log/log_test.log'
		# 写入文件，追加'a' 覆盖使用'w'
		with open(logfile, 'a') as f:
			f.write(output)
			f.write(output2)
		#print(f"{src.name} -> {dst.name}结果已保存到{logfile}")
	print(f"*** 收发测试结束 共有{i}对节点参与收发***\n")


if __name__ == '__main__':
    setLogLevel('info')
    start_traffic_cmd()

