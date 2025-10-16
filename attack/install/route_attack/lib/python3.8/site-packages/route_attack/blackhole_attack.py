import os

def start_blackhole():
    # 模拟将当前节点设置为黑洞，丢弃所有转发流量
    os.system("sudo iptables -A FORWARD -j DROP")
    print("黑洞攻击已启动，所有转发流量被丢弃")

if __name__ == '__main__':
    start_blackhole()

