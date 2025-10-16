#!/bin/bash
#  增加功能：n为0时，只根据-w开启world，不会i添加无人机节点。
# 运行：./Tools/simulation/gazebo-classic/sitl_world_run.sh -n 0 -w safe_landing

#    TCP port 4560留了下来没有使用
# 其他n mg功能没变 但不用

function cleanup() {
	pkill -x px4
	pkill gzclient
	pkill gzserver
}

#创建并加载无人机模型
function spawn_model() {
	MODEL=$1
	N=$2 #第n个实例
	X=$3
	Y=$4
	X=${X:=0.0}
	Y=${Y:=$((3*${N}))}


	SUPPORTED_MODELS=("iris" "p450" "p450_2Dlidar_depth" "plane" "standard_vtol" "rover" "r1_rover" "typhoon_h480")
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
	echo "starting instance $N in $(pwd)"
	$build_path/bin/px4 -i $N -d "$build_path/etc" >out.log 2>err.log  


	set --
	set -- ${@} ${src_path}/Tools/simulation/gazebo-classic/sitl_gazebo-classic/scripts/jinja_gen.py

	set -- ${@} ${src_path}/Tools/simulation/gazebo-classic/sitl_gazebo-classic/models/${MODEL}/${MODEL}.sdf.jinja
	set -- ${@} ${src_path}/Tools/simulation/gazebo-classic/sitl_gazebo-classic
	
	#设置 MAVLink 端口，保证多个实例不会端口冲突：
	set -- ${@} --mavlink_tcp_port $((4560+${N}))
	set -- ${@} --mavlink_udp_port $((14560+${N}))
	set -- ${@} --mavlink_id $((1+${N}))
	set -- ${@} --gst_udp_port $((5600+${N}))
	set -- ${@} --video_uri $((5600+${N}))
	set -- ${@} --mavlink_cam_udp_port $((14530+${N}))
	set -- ${@} --output-file /home/a/uav/src/my_uav/models/${MODEL}/${MODEL}_${N}.sdf
	#set -- ${@} --output-file /tmp/${MODEL}_${N}.sdf  

	python3 ${@}

	echo "Spawning ${MODEL}_${N} at ${X} ${Y}"
	gz model --spawn-file=/home/a/uav/src/my_uav/models/${MODEL}/${MODEL}_${N}.sdf --model-name=${MODEL}_${N} -x ${X} -y ${Y} -z 0.83
	#gz model --spawn-file=/tmp/${MODEL}_${N}.sdf --model-name=${MODEL}_${N} -x ${X} -y ${Y} -z 0.83

	popd &>/dev/null

}

if [ "$1" == "-h" ] || [ "$1" == "--help" ]
then
	echo "Usage: $0 [-n <num_vehicles>] [-m <vehicle_model>] [-w <world>] [-s <script>]"
	echo "-s flag is used to script spawning vehicles e.g. $0 -s iris:3,plane:2"
	exit 1
fi


while getopts n:m:w:s:t:l: option
do
	case "${option}"
	in
		n) NUM_VEHICLES=${OPTARG};;
		m) VEHICLE_MODEL=${OPTARG};;
		w) WORLD=${OPTARG};;
		s) SCRIPT=${OPTARG};;
		t) TARGET=${OPTARG};;
		l) LABEL=_${OPTARG};;
	esac
done

num_vehicles=${NUM_VEHICLES:=2}
world=${WORLD:=safe_landing}
target=${TARGET:=px4_sitl_default}
vehicle_model=${VEHICLE_MODEL:="iris"}
export PX4_SIM_MODEL=gazebo-classic_${vehicle_model}

echo ${SCRIPT}
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
src_path="$SCRIPT_DIR/../../.."
echo -e "src_path ${src_path}"


build_path=${src_path}/build/${target}
mavlink_udp_port=14560
mavlink_tcp_port=4560

echo "killing running instances"
pkill -x px4 || true

sleep 1

source ${src_path}/Tools/simulation/gazebo-classic/setup_gazebo.bash ${src_path} ${src_path}/build/${target}

# To use gazebo_ros ROS2 plugins
if [[ -n "$ROS_VERSION" ]] && [ "$ROS_VERSION" == "2" ]; then
	ros_args="-s libgazebo_ros_init.so -s libgazebo_ros_factory.so"
else
	ros_args=""
fi

# 开启world
echo "Starting gazebo"
gzserver ${src_path}/Tools/simulation/gazebo-classic/sitl_gazebo-classic/worlds/${world}.world --host 0.0.0.0 --verbose $ros_args &
sleep 5


n=0
if [ -z ${SCRIPT} ]; then

	if [ $num_vehicles -eq 0 ]; then
		echo "No vehicles to spawn."
	fi
	
	if [ $num_vehicles -gt 255 ] 
	then
		echo "Tried spawning $num_vehicles vehicles. The maximum number of supported vehicles is 255"
		exit 1
	fi

	while [ $n -lt $num_vehicles ]; do
		spawn_model ${vehicle_model} $(($n + 1))
		n=$(($n + 1))
	done
else
	IFS=,
	for target in ${SCRIPT}; do
		target="$(echo "$target" | tr -d ' ')" 
		target_vehicle=$(echo $target | cut -f1 -d:)
		target_number=$(echo $target | cut -f2 -d:)
		target_x=$(echo $target | cut -f3 -d:)
		target_y=$(echo $target | cut -f4 -d:)

		if [ $n -gt 255 ]
		then
			echo "Tried spawning $n vehicles. The maximum number of supported vehicles is 255"
			exit 1
		fi

		m=0
		while [ $m -lt ${target_number} ]; do
			export PX4_SIM_MODEL=gazebo-classic_${target_vehicle}
			spawn_model ${target_vehicle}${LABEL} $(($n + 1)) $target_x $target_y
			m=$(($m + 1))
			n=$(($n + 1))
		done
	done

fi
trap "cleanup" SIGINT SIGTERM EXIT

echo "Starting gazebo client"
gzclient
