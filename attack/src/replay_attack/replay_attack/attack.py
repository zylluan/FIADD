from scapy.all import *

# 捕获数据包并保存到文件
def capture_packets(interface="wlan0", count=10, output_file="captured.pcap"):
    print(f"开始捕获 {count} 个数据包...")
    packets = sniff(iface=interface, count=count)  #sniff()从指定网络接口捕获指定数量的数据包
    wrpcap(output_file, packets)
    print(f"数据包已保存到 {output_file}")

# 重放捕获的数据包
def replay_packets(pcap_file="captured.pcap"):
    packets = rdpcap(pcap_file)  #rdpcap() 函数加载之前捕获的 captured.pcap 文件
    print(f"开始重放 {len(packets)} 个数据包...")
    for packet in packets:
        send(packet)  # 重放每一个捕获到的数据包

# 主函数
if __name__ == "__main__":
    capture_packets()  # 捕获数据包
    replay_packets()   # 重放数据包

