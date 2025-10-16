#!/bin/bash

Uav_id=${1}
Uav_name=${2}

source ~/.bashrc
export GAZEBO_MASTER_URI=http://10.0.0.10:11345
export PX4_SIM_HOSTNAME=10.0.0.10

cd ~/ros2_ws || { echo "ros2_ws目录不存在"; return; }
source install/setup.sh

cd ~/PX4-Autopilot || { echo "PX4目录不存在"; return; }
./Tools/simulation/gazebo-classic//sitl_adduav_run.sh -n $Uav_id -m $Uav_name




