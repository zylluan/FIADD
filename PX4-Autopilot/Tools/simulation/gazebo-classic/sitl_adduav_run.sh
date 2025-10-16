#!/bin/bash

# ./Tools/simulation/gazebo-classic/sitl_adduav_run.sh  -m iris -n 10

function cleanup() {
	echo "Cleaning up..."

}

#创建并加载无人机模型
function spawn_model() {
	MODEL=$1
	N=$2 #第n个实例
	X=$3
	Y=$4
	X=${X:=0.0}
	Y=${Y:=$((3*(${N}-1)))}

	#检查是否支持该模型
	# 加模型步骤：
		#1 创建~/PX4-Autopolit/Tools/simulation/gazebo-classic/sitl_gazebo-classic/models/${MODEL}/${MODEL}.sdf.jinja 目录和对应文件
		#2 创建目标sdf文件(--output-file)的目录：/home/a/uav/src/my_uav/models/${MODEL}
		#3 加配置文件~/PX4-Autopilot/ROMFS/px4fmu_common/init.d-posix/airframes（代码中有export PX4_SIM_MODEL=gazebo-classic_${vehicle_model}）
	SUPPORTED_MODELS=("p450" "p450_2Dlidar_depth" "hokuyo_ust_20lx")
	if [[ " ${SUPPORTED_MODELS[*]} " != *"$MODEL"* ]];
	then
		echo "ERROR: Currently only vehicle model $MODEL is not supported!"
		echo "       Supported Models: [${SUPPORTED_MODELS[@]}]"
		trap "cleanup" SIGINT SIGTERM EXIT
		exit 1
	fi
	
	#创建实例工作目录
	working_dir="$build_path/rootfs/$n"
	[ ! -d "$working_dir" ] && mkdir -p "$working_dir"
	
	#启动 PX4 实例
	pushd "$working_dir" &>/dev/null
	echo "working_dir::: $working_dir"
	
	uav_name="uav${N}"
	#通过 jinja_gen.py 生成 .sdf 文件
	set --
	set -- ${@} ${src_path}/Tools/simulation/gazebo-classic/sitl_gazebo-classic/scripts/jinja_gen.py
	#jinja文件的位置必须是sitl_gazebo-classic/models/${MODEL}/${MODEL}.sdf.jinja
	set -- ${@} ${src_path}/Tools/simulation/gazebo-classic/sitl_gazebo-classic/models/${MODEL}/${MODEL}.sdf.jinja
	#jinja_gen.py的运行环境 所以jinja文件的位置也必须在该目录的下层
	set -- ${@} ${src_path}/Tools/simulation/gazebo-classic/sitl_gazebo-classic
	
	#设置 MAVLink 端口，保证多个实例不会端口冲突：
	set -- ${@} --mavlink_tcp_port $((4560+${N}))
	set -- ${@} --mavlink_udp_port $((14560+${N}))
	set -- ${@} --mavlink_id $((1+${N}))
	set -- ${@} --gst_udp_port $((5600+${N}))
	set -- ${@} --video_uri $((5600+${N}))
	set -- ${@} --mavlink_cam_udp_port $((14530+${N}))
	set -- ${@} --uav_name ${uav_name}
	set -- ${@} --output-file /home/a/uav/src/my_uav/models/${MODEL}/${MODEL}_${N}.sdf   #输出 SDF 文件 位置自己定，要确保路径上的目录都存在，文件不存在可以自动创建

	python3 ${@}
	echo "output-file:  /home/a/uav/src/my_uav/models/${MODEL}/${MODEL}_${N}.sdf"

	echo "Spawning ${MODEL}_${N} at ${X} ${Y}"

	gz model --spawn-file=/home/a/uav/src/my_uav/models/${MODEL}/${MODEL}_${N}.sdf --model-name=${MODEL}_${N} -x ${X} -y ${Y} -z 0.83 



	echo "starting instance $N in $(pwd)"
	#screen -S px4_instance_1 $build_path/bin/px4 -i $N -d "$build_path/etc" nsh
	$build_path/bin/px4 -i $N "$build_path/etc" 
	#px4交互模式 标准输出

	popd &>/dev/null

}

if [ "$1" == "-h" ] || [ "$1" == "--help" ]
then
	echo "Usage: $0 [-n <VEHICLES_id>] [-m <vehicle_model>] "
	exit 1
fi

#解析用户参数
while getopts n:m:t:l: option
do
	case "${option}"
	in
		n) VEHICLES_id=${OPTARG};;
		m) VEHICLE_MODEL=${OPTARG};;
		t) TARGET=${OPTARG};;
		l) LABEL=_${OPTARG};;
	esac
done

VEHICLES_id=${VEHICLES_id:=1}
target=${TARGET:=px4_sitl_default}
vehicle_model=${VEHICLE_MODEL:="p450_2Dlidar_depth"}
export PX4_SIM_MODEL=gazebo-classic_${vehicle_model}


SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
src_path="$SCRIPT_DIR/../../.."
build_path=${src_path}/build/${target}
mavlink_udp_port=14560
mavlink_tcp_port=4560


sleep 1

source ${src_path}/Tools/simulation/gazebo-classic/setup_gazebo.bash ${src_path} ${src_path}/build/${target}

# To use gazebo_ros ROS2 plugins
if [[ -n "$ROS_VERSION" ]] && [ "$ROS_VERSION" == "2" ]; then
	ros_args="-s libgazebo_ros_init.so -s libgazebo_ros_factory.so"
else
	ros_args=""
fi

# 启动单个 PX4 实例并添加模型
spawn_model ${vehicle_model} ${VEHICLES_id} 

trap "cleanup" SIGINT SIGTERM EXIT


