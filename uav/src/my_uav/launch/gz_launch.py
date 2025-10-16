import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
#from launch_ros.substitutions import GetPackageShareDirectory  budui 
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    # Gazebo世界文件的路径
    gazebo_world_file = '/home/a/uav/src/my_uav/worlds/safe_landing.world'
    #gazebo_world_file = '/home/a/uav/src/my_uav/worlds/empty_world.world'
    #gazebo_world_file = PathJoinSubstitution([
        #GetPackageShareDirectory('my_uav_simulation'), 'worlds', 'my_world.world'])

    # 定义Gazebo的启动命令
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                '/opt/ros/galactic/share/gazebo_ros', 'launch', 'gazebo.launch.py')),
        launch_arguments={'world': gazebo_world_file}.items()
    )

    # 启动Gazebo仿真
    return LaunchDescription([
        # 启动Gazebo
        gazebo_launch,
        
        Node(
            package="gazebo_ros",
            executable="spawn_entity.py",
            arguments=[
            	"-entity", "p450_2Dlidar_depth", 
            	"-file", 
                       PathJoinSubstitution([FindPackageShare("my_uav"), "models", "p450_2Dlidar_depth", "p450_2Dlidar_depth_1.sdf"]), 
		"-x", "1", "-y", "0", "-z", "0.5"
	     ],
            output="screen"
        ),


        # 在启动时打印一条信息
        LogInfo(
            condition=IfCondition(LaunchConfiguration('verbose')),
            msg="Gazebo simulation launched with world: baylands.world"),

    ])

