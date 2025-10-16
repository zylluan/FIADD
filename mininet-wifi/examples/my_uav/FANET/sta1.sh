#!/bin/bash

# 运行 source run.sh 这样脚本就在当前 shell 环境中执行， 所有 export 和 source 的效果都会保留下来。
# 运行 bash run.sh 或是 ./run.sh 这两种方式都会启动一个 新的子 shell 进程 来执行脚本。

source ~/.bashrc
export GAZEBO_MASTER_URI=http://10.0.0.10:11345

cd ~/px4_ros_uxrce_dds_ws || { echo "px4_ros_uxrce_dds_ws目录不存在"; return; }
source install/setup.sh
MicroXRCEAgent udp4 -p 8888 &

cd ~/ros2_ws || { echo "ros2_ws目录不存在"; return; }
source install/setup.sh

cd ~/PX4-Autopilot/Tools/simulation/gazebo-classic || { echo "PX4目录不存在"; return; }
./sitl_world_run.sh -n 0 &




