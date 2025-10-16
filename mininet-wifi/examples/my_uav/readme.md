# 目录结构
1）该目录下包含了一些已有的网络拓扑python脚本，也可以在此创建新的自组织网络；
2）attack: 攻防脚本，和FIADD/attack目录作用一致，为减少路径上的开支暂时将需要的攻击
移到此处；
3）FANET: 加载gazebo、UAV、PX4的脚本

在CLI中可以执行以下命令：
### 抓包：
tcpdump [nodes] [times,如620]
转cvs：python3 pcap_to_csv.py <input.pcap> <output.csv> <append> [label]

### 业务通信：	
start_traffic [seconds] [pkt_count] 

### 攻击：	
详细指令和文件在attack目录中
