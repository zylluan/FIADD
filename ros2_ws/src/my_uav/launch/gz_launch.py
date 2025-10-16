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
    gazebo_world_file = '/home/zy/ros2_ws/src/my_uav_simulation/worlds/empty_world.world'
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


        # 在启动时打印一条信息
        LogInfo(
            condition=IfCondition(LaunchConfiguration('verbose')),
            msg="Gazebo simulation launched with world: empty_world.world"),

    ])

