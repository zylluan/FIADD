抓包：tcpdump [nodes] [times,如620]
转cvs：python3 pcap_to_csv.py <input.pcap> <output.csv> <append> [label]

业务通信：	start_traffic [seconds] [pkt_count]  
DDOS：    	ddos [attack_duration] [total_duration] [delay] 
signal interference：
	丢包攻击：tc qdisc add dev sta7-wlan0 root netem loss 30%
	延迟攻击：tc qdisc add dev sta7-wlan0 root netem delay 200ms
	加抖动：     ... delay 200ms 50ms distribution normal ---延迟在200±50ms，正态分布
	包损坏:   ... corrupt 5%
	重排序:   ... delay 50ms reorder 25% 50%  ---25% 的包会乱序，概率偏差 50%。
	抖动 + 丢包:  ...delay 100ms 20ms loss 10%
	恢复正常: tc qdisc del dev sta7-wlan0 root
GPS Spoofing attack：
Man-in-Middle attack：

