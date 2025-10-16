#!/usr/bin/python3

"""
sudo python3 olsr.py olsrd   (用python的话，路由协议的参数不起作用)
python3 olsr.py 不加路由协议
加参数-a   指定无线通信距离

路由配置文件：/etc/olsrd/olsrd.conf

查看节点网络信息：nodes net 
路由：
    sta1 route     
    sta1 olsrd -i sta1-wlan0 -d 2   节点 OLSR协议的守护进程名称  接口参数-i sta1-wlan0  日志记录的详细程度。-d是--debug的简写，后面跟字表示日志级别，数字越大记录的信息越详细。
    olsrd -v
sta1 ping sta2
sta1 traceroute sta4
"""

'''
文件操作：
>：覆盖写，如果文件不存在会创建
>>：追加写，如果文件不存在也会创建  
如src.cmd(f'ping -c {pkt_count} {dst.IP()} >> {logfile} &')
'''

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
from gps_spoof import send_fake_gps
from MITM import mitm_loop

# ---------------- 日志函数 ----------------
def _log(self, log_file, message):
	timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
	log_msg = f"[{timestamp}] {message}"
	print(log_msg)
	with open(self.log_file, "a") as f:
		f.write(log_msg + "\n")

# 定义两分钟通信函数
def start_traffic_cmd(net, duration=120, pkt_count=10):
	"""默认两分钟随机收发数据包测试"""
	print("\n*** 开始随机收发数据包测试 ***\n")
	nodes = net.stations[:3]  # Mininet-WiFi 里uav1 ~ uav6 station 节点
	start_time = time.time()
	i = 0
	while time.time() - start_time < duration:
		i += 1
		src, dst = random.sample(nodes, 2)
		dst_ip = dst.IP()
		#print(f"[{time.strftime('%H:%M:%S')}] {src.name} -> {dst.name} 发送{pkt_count} 个包")
		output = src.cmd(f'ping -c {pkt_count} {dst_ip}')
		#print(output)  # 打印到终端
		logfile = f'/home/a/mininet-wifi/zy_log/{src.name}_to_{dst.name}_{start_time}.log'
		# 写入文件，追加'a' 覆盖使用'w'
		with open(logfile, 'a') as f:
			f.write(output)
		#print(f"{src.name} -> {dst.name}结果已保存到{logfile}")
	print(f"*** 收发测试结束 共有{i}对节点参与收发***\n")
def start_tcpdump_all(net, nodes=None, out_dir="/home/a/mininet-wifi/pcap_logs", duration=120):
	"""
	在所有 station 节点上开启 tcpdump 抓包
	:param net: Mininet-WiFi 网络对象
	:param nodes: 节点名称列表，比如 ["sta1", "sta5", "sta7"]，默认 None 表示所有 station
	:param out_dir: 保存目录
	:param duration: 抓包时长（秒）
	"""
	if not os.path.exists(out_dir):
		os.makedirs(out_dir)
	# 如果没指定节点，就抓所有 station
	if nodes is None:
		target_nodes = net.stations
	else:
		if isinstance(nodes[0],str):
			target_nodes = [net.get(n) for n in nodes]
		else:
			target_nodes = nodes
	start_time = time.time()
	for node in target_nodes:  
		pcap_file = f"{out_dir}/{node.name}_{start_time}.pcap"
		cmd = f"timeout {duration} tcpdump -i {node.name}-wlan0 -s 0 -w {pcap_file} &"
		print(f"[INFO] 在 {node.name} 上开启 tcpdump, 保存到 {pcap_file}")
		node.cmd(cmd)
	print(f"[INFO] tcpdump 已启动，持续 {duration} 秒, 后台运行中...")

#自定义 CLI 类
class MyCLI(CLI):
	def __init__(self, net, **kwargs):
		super(MyCLI, self).__init__(net, **kwargs)
	def do_mitm(self, line):
		"""mitm <attacker> <victim1_ip> <victim2_ip> [duration]
		例: mitm uav3 10.0.0.1 10.0.0.2 60
		"""
		args = line.split()
		if len(args) < 3:
			print("用法: mitm <attacker> <victim1_ip> <victim2_ip> [duration]")
			return
		attacker_name, v1, v2 = args[0], args[1], args[2]
		dur = int(args[3]) if len(args) > 3 else 60
		attacker = self.mn.get(attacker_name)
		iface = f"{attacker_name}-wlan0"
		cmd = f"python3 /home/a/mininet-wifi/examples/my_uav/attacks/MITM.py --iface {iface} --victim1 {v1} --victim2 {v2} --duration {dur} &"
		print(f"[MyCLI] 在 {attacker_name} 上启动 MITM: {cmd}")
		attacker.cmd(cmd)
	def do_gps_spoof(self, line):
		"""gps_spoof <attacker> <target_ip> <target_port> <lat> <lon> [alt] [rate] [duration]
		例: gps_spoof uav3 10.0.0.4 14560 22.5 114.1 100 1 60
		"""
		args = line.split()
		if len(args) < 5:
			print("用法: gps_spoof <attacker> <target_ip> <target_port> <lat> <lon> [alt] [rate] [duration]")
			return
		attacker_name = args[0]
		target_ip = args[1]
		target_port = int(args[2])
		lat = float(args[3])
		lon = float(args[4])
		alt = float(args[5]) if len(args) > 5 else 100.0
		rate = float(args[6]) if len(args) > 6 else 1.0
		dur = int(args[7]) if len(args) > 7 else 60

		attacker = self.mn.get(attacker_name)
		cmd = f"python3 /home/a/mininet-wifi/examples/my_uav/attacks/gps_spoof.py --target {target_ip} --port {target_port} --lat {lat} --lon {lon} --alt {alt} --rate {rate} --duration {dur} &"
		print(f"[MyCLI] 在 {attacker_name} 上执行: {cmd}")
		attacker.cmd(cmd)
        
	def do_start_traffic(self, line):
		"""start_traffic [seconds] [pkt_count]  -- 开始随机流量测试"""
		args = line.split()
		duration = int(args[0]) if len(args) > 0 else 120
		pkt_count = int(args[1]) if len(args) > 1 else 10
		t = threading.Thread(
			target=self._traffic_thread,
			args=(duration, pkt_count),
			daemon=True
		)
		t.start()
		print(f"*** 已启动随机流量测试，时长={duration}s, pkt_count={pkt_count} ***")
        #start_traffic_cmd(self.mn, duration, pkt_count)
        
	def do_ddos(self, line):
		"""ddos [attack_duration] [total_duration] [delay] -- 发起 DDoS 攻击"""
		args = line.split()
		attack_duration = int(args[0]) if len(args) > 1 else 30
		total_duration = int(args[1]) if len(args) > 1 else 120
		delay = int(args[2]) if len(args) > 2 else 5
		t = threading.Thread(
			target=self._ddos_thread,
			args=(attack_duration, total_duration, delay),
			daemon=True
		)
		t.start()
		print(f"*** 已启动 DDoS 攻击线程***")
        #ddos_attack(self.mn, target=target, duration=duration, start_delay=delay)
        
	def _traffic_thread(self, duration, pkt_count):
		start_traffic_cmd(self.mn, duration, pkt_count)
		print("*** 随机流量测试完成 ***")        
	def _ddos_thread(self, attack_duration, total_duration, delay):
		time.sleep(delay)
		#ddos_attack(self.mn, target=target, duration=duration, start_delay=0)
		ddos_attack(self.mn, attack_duration=attack_duration, total_duration=total_duration, start_delay=0)
		print(f"*** DDoS 攻击完成 ***")
		
	def do_tcpdump(self, line):
		"""tcpdump [node1 node2 ...] [duration]
		在指定节点（或所有 station）上启动 tcpdump 抓包，默认 120s
		示例:
		tcpdump                  # 所有 station 抓 120s
		tcpdump sta3 sta5 60     # sta3, sta5 抓 60s
		"""
		args = line.split()
		# 如果最后一个参数是数字，则认为是 duration
		if args and args[-1].isdigit():
			duration = int(args[-1])
			node_names = args[:-1]
		else:
			duration = 120
			node_names = args
		# 如果给了节点名
		if node_names:
			try:
				nodes = [self.mn.get(n) for n in node_names]
			except KeyError as e:
				print(f"[ERROR] 找不到节点: {e}")
				return
		else:
			nodes = None   # 交给 start_tcpdump_all 处理所有节点
			
		# 启动子线程执行抓包
		t = threading.Thread(
			target=start_tcpdump_all,   # 线程要跑的函数
			args=(self.mn,),  # 给函数的第一个位置参数
			kwargs={"nodes": nodes, "duration": duration},   # 给函数的关键字参数
			daemon=True
		)
		t.start()
		print(f"[INFO] tcpdump 已启动 (duration={duration}s)，后台运行中...")



def topology(args):
    "Create a network."
    net = Mininet_wifi(link=wmediumd, wmediumd_mode=interference)

    info("*** Creating nodes\n")
    kwargs = dict()
    if '-a' in args:
        kwargs['range'] = 90

    #info("position：\n  uav1 25,50,0\n  uav2 75,10,0\n  uav3 75,90,0\n  uav4 125,50,0\n")
    "修改节点名字"
    uav1 = net.addStation('uav1', ip6='fe80::1',position='25,50,0', **kwargs)
    uav2 = net.addStation('uav2', ip6='fe80::2',position='75,10,0', **kwargs)
    uav3 = net.addStation('uav3', ip6='fe80::3',position='75,90,0', **kwargs)
    uav4 = net.addStation('uav4', ip6='fe80::4',position='125,50,0', **kwargs)
    uav5 = net.addStation('uav5', ip6='fe80::5',position='125,100,0', **kwargs)
    uav6 = net.addStation('uav6', ip6='fe80::6',position='200,50,0', **kwargs)
    uav7 = net.addStation('uav7', ip6='fe80::7',position='175,50,0', **kwargs)
    uav8 = net.addStation('uav8', ip6='fe80::8',position='100,30,0', **kwargs)
    uav9 = net.addStation('uav9', ip6='fe80::9',position='200,200,0', **kwargs)
    sta1 = net.addStation('sta1', ip6='fe80::10',position='125,50,0', **kwargs)
    

    net.setPropagationModel(model="logDistance", exp=4)

    info("*** Configuring wifi nodes\n")
    net.configureWifiNodes()

    info("*** Creating links\n")
    protocols = ['babel', 'batman_adv', 'batmand', 'olsrd', 'olsrd2']
    kwargs = dict()
    for proto in args:
        if proto in protocols:
            kwargs['proto'] = proto
            info("   proto = ", proto , "\n")
    "节点名字需要和接口名字对应"
    net.addLink(uav1, cls=adhoc, intf='uav1-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+',  **kwargs)
    net.addLink(uav2, cls=adhoc, intf='uav2-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(uav3, cls=adhoc, intf='uav3-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(uav4, cls=adhoc, intf='uav4-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(sta1, cls=adhoc, intf='sta1-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(uav5, cls=adhoc, intf='uav5-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(uav6, cls=adhoc, intf='uav6-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(uav7, cls=adhoc, intf='uav7-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)    
    net.addLink(uav8, cls=adhoc, intf='uav8-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    net.addLink(uav9, cls=adhoc, intf='uav9-wlan0',
                ssid='adhocNet', mode='g', channel=5,
                ht_cap='HT40+', **kwargs)
    

    info("*** Plotting graph\n")
    net.plotGraph(max_x=300, max_y=300)   # 绘制拓扑图

    info("*** Setting mobility\n")
    net.setMobilityModel(time=0, model='RandomDirection',
                         max_x=300, max_y=300,
                         min_v=1, max_v=2, seed=1)
    
    info("*** Starting network\n")
    net.build()

    
    if 'proto' not in kwargs:
        info("\n*** Addressing...\n")
        uav1.setIP6('2001::1/64', intf="uav1-wlan0")
        uav2.setIP6('2001::2/64', intf="uav2-wlan0")
        uav3.setIP6('2001::3/64', intf="uav3-wlan0")
        sta1.setIP6('2001::4/64', intf="sta1-wlan0")
        uav4.setIP6('2001::4/64', intf="uav4-wlan0")
        uav5.setIP6('2001::5/64', intf="uav5-wlan0")
        uav6.setIP6('2001::6/64', intf="uav6-wlan0")
        uav7.setIP6('2001::7/64', intf="uav7-wlan0")
        uav8.setIP6('2001::8/64', intf="uav8-wlan0")
        uav9.setIP6('2001::9/64', intf="uav9-wlan0")
        
        
    # 替换成 MyCLI
    info("*** Running CLI\n")
    MyCLI(net)  # 进入自定义CLI
    # CLI(net)
    

    info("*** Stopping network\n")
    net.stop()


if __name__ == '__main__':
    setLogLevel('info')
    topology(sys.argv)

