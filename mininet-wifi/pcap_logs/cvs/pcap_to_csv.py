from scapy.all import rdpcap, IP, TCP, UDP
import csv
import sys
import os

"""
	将 PCAP 文件转换为 CSV 文件，每行包含数据包的基本信息，并添加 label。

	参数:
		pcap_file (str): 输入的 pcap 文件路径
		csv_file (str): 输出的 CSV 文件路径
		append (bool): 是否以追加模式写入 CSV，如果是 True，且文件存在，则不会写表头
		label (str): 每行数据包的标签，用于标注类型，如 "normal"、"attack"

	CSV字段:
		timestamp: 包捕获时间
		frame.number: 包编号
		frame.len: 包长度
		ip.src, ip.dst: IP 源和目的地址
		tcp.srcport, tcp.dstport: TCP 源端口和目的端口
		udp.srcport, udp.dstport: UDP 源端口和目的端口
		tcp.seq_raw, tcp.ack_raw: TCP序列号和确认号
		data.len: TCP/UDP负载长度
		time_since_last_packet: 与上一包的时间差，第一包为0
		label: 自定义标签
"""

def pcap_to_csv(pcap_file, csv_file, append, label):
	packets = rdpcap(pcap_file)
	last_time = None
	# 判断是否是新文件，如果是需要写表头 
	write_header = True
	if append and os.path.exists(csv_file):
		write_header = False
	mode = 'a' if append else 'w'
	# Python 的 open() 默认模式 'w' 就会自动创建文件（前提是父目录存在且可写）。
	with open(csv_file, mode, newline='') as f:
		writer = csv.writer(f)
		# 写表头
		if write_header:
			writer.writerow([
				"timestamp", "frame.number", "frame.len",
				"ip.src", "ip.dst",
				"tcp.srcport", "tcp.dstport",
				"udp.srcport", "udp.dstport",
				"tcp.seq_raw", "tcp.ack_raw",
				"data.len", "time_since_last_packet",
				"label"
			])

		for i, pkt in enumerate(packets, 1):
			timestamp = pkt.time
			frame_number = i
			frame_len = len(pkt)

			ip_src, ip_dst = None, None
			tcp_sport, tcp_dport, tcp_seq, tcp_ack = None, None, None, None
			udp_sport, udp_dport = None, None
			data_len = 0

			if IP in pkt:
				ip_src = pkt[IP].src
				ip_dst = pkt[IP].dst

			if TCP in pkt:
				tcp_sport = pkt[TCP].sport
				tcp_dport = pkt[TCP].dport
				tcp_seq = pkt[TCP].seq
				tcp_ack = pkt[TCP].ack
				data_len += len(pkt[TCP].payload)

			if UDP in pkt:
				udp_sport = pkt[UDP].sport
				udp_dport = pkt[UDP].dport
				data_len += len(pkt[UDP].payload)

			if last_time is None:
				time_since_last = 0
			else:
				time_since_last = timestamp - last_time
			last_time = timestamp

			writer.writerow([
				timestamp, frame_number, frame_len,
				ip_src, ip_dst,
				tcp_sport, tcp_dport,
				udp_sport, udp_dport,
				tcp_seq, tcp_ack,
				data_len, time_since_last,
				label
			])
	print(f"[INFO] 转换完成，CSV 保存到 {csv_file}")

if __name__ == "__main__":
    # 至少有前4个参数
    if len(sys.argv) < 4:
        print("用法: python3 pcap_to_csv.py <input.pcap> <output.csv> <append> [label]")
        sys.exit(1)

    input_pcap = sys.argv[1]
    output_csv = sys.argv[2]
    append = sys.argv[3]
    label = sys.argv[4] if len(sys.argv) > 4 else "normal"

    # 调用函数，同时传入 label
    pcap_to_csv(input_pcap, output_csv, append, label)

