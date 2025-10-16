FIADD


### About FIADD
包含”智能无人机安全自组织网络仿真平台“、FIADD攻击检测和防御方法。


### 目录结构：
分以下三部分
（1）攻击模块：
katoolin3：		kali相关命令工具
attack:		攻击模块，可在该目录下以模块化的方式添加攻击手段 
     
（2）组网模块/数传模块：
mininet-wifi：	组网模块/数传模块，可在该目录下创建新的网络
wmediumd：		无线通信源码   
olsrd：		olsr协议源码   
   
（3）智能UAV仿真模块：
uav：			包含UAV-MLLM相关配置和启动文件
ft-uav_llm：		UAV-MLLM源码              
PX4-Autopilot：	PX4源码，包含了Gazebo的安装和启动脚本，在该目录下可改动PX4相关内容，如为PX4添加自定义仿真模型
ros2_ws：		ROS2工作目录，包含PX4-ROS桥		
px4_ros_uxrce_dds_ws：	DDS代理，用于将PX4消息转换为ROS topic


### 使用方法
整个项目运行在ubuntu20.04 ROS2 Galactic中。
1. 在ubuntu20.04上安装ROS2 Galactic
2. git clone 该项目
3. 编译PX4：
先配置环境变量：
echo “source ~/PX4-Autopilot/Tools/simulation/gazebo-classic/setup_gazebo.bash ~/PX4-Autopilot ~/PX4-Autopilot/build/px4_sitl_default” >> ~/.bashrc
再bash ./PX4-Autopilot/Tools/setup/ubuntu.sh
	在安装过程中确认并通过所有的提示;
	可通过传输参数--no-nuttx 和/或 --no-sim-tools 来跳过 nuttx 和/或 仿真器工具的安装
4. 安装仿真工具：
(1) 安装
方法1:  编译PX4时通过ubuntu.sh安装对应仿真工具
方法2：  自行安装，推荐使用Gazebo version 11.15.1
(2) 配置环境变量
echo “export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/home/a/uav/src/my_uav/models:/home/a/.gazebo/models” >> ~/.bashrc 

5. 编译mininet-wifi
cd mininet-wifi  && sudo util/install.sh -Wlnfv  

6. 将DDS和ros2_ws目录中的setup.bash脚本写入~/.bashrc
# ROS-PX4桥
source ~/ros2_ws/install/setup.bash
# DDS
#source ~/px4_ros_uxrce_dds_ws/install/setup.bash


### FIADD启动步骤：
1. 开启olsr自组织网络：
cd ~/FIADD/mininet-wifi/examples/my_uav
sudo python3 olsr.py olsrd  # 开启9个虚拟节点uav1~uav9，代表9个UAV，和一个用于加载Gazebo world的虚拟节点sta1.

2. 初始化FANET：
在sat1节点上执行：source sat1.sh
在uav1~uav9节点上分别执行：source uav.sh 1/2/3/4/5/6/7/8/9 p450_2Dlidar_depth

3. 开启随机通信任务：
在mininet-wifi的CLI终端：
start_traffic 6000 10  	# 随机通信6000s
tcpdump 6000 		# 对所有节点抓包，时长为6000s

4. 模拟攻击
在mininet-wifi的CLI终端，执行相应攻击的指令：
    • ddos 60 600 0		# 执行ddos攻击，总时长600s 
    • si uav7-wlan0 corrupt	# 对uav7执行信号干扰攻击   
    • mitm uav3-wlan0 10.0.0.1 10.0.0.2 600	# uav3作为attacker对uav1（10.0.0.1）和uav2（10.0.0.2）执行MITM攻击，时长600s
    • gps_spoof 10.0.0.4  22.5 11.1 100  # 对uav4执行GPS spoof攻击,注入错误数据(x,y,z)=(22.5,11.1,100)

5. 查看模型输出
cat /home/a/uav/logs/conversation_history.txt



















