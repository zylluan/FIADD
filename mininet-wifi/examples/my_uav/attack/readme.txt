攻击模块

### 目前已有攻击：4种
1）DDOS：    	ddos [attack_duration] [total_duration] [delay] 
2）signal interference：
	丢包攻击：tc qdisc add dev sta7-wlan0 root netem loss 30%
	延迟攻击：tc qdisc add dev sta7-wlan0 root netem delay 200ms
	加抖动：     ... delay 200ms 50ms distribution normal ---延迟在200±50ms，正态分布
	包损坏:   ... corrupt 5%
	重排序:   ... delay 50ms reorder 25% 50%  ---25% 的包会乱序，概率偏差 50%。
	抖动 + 丢包:  ...delay 100ms 20ms loss 10%
	恢复正常: tc qdisc del dev sta7-wlan0 root
3）GPS Spoofing attack：   gps_spoof <victim1_port>  <lat>  <lon> <alt> 
4） Man-in-Middle attack： mitm <attacker_port> <victim1_ip> <victim2_ip> [duration]  

### 添加其他攻击类型：
1) 在该目录下编写对应脚本；
2) 在自定义的CLI类中添加对应的攻击脚本的执行函数；
3) 在CLI中执行对于函数即可。 
	

