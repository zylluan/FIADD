import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        # 运行 ros2 bag 录制相机数据
        ExecuteProcess(
		cmd=['ros2', 'bag', 'record', '-o', 'my_depth_bag', '/depth/image_raw'],
		output='screen'
	),
	
	ExecuteProcess(
		cmd=['ros2', 'bag', 'record', '-o', 'my_depth_depth_bag', '/depth/depth/image_raw'],
		output='screen'
	),
        
	ExecuteProcess(
		cmd=['ros2', 'bag', 'record', '-o', 'my_ired2_bag', '/ired/ired_cam/ired2/image_raw'],
		output='screen'
        ),
        
	ExecuteProcess(
		cmd=['ros2', 'bag', 'record', '-o', 'my_ired2_bag', '/ired/ired_cam/ired2/image_raw'],
		output='screen'
        ),
            
        # 运行自定义的订阅节点 (save_image.py)
 #       Node(
  #          package='your_package_name',  # 替换为你的 package 名称
   #         executable='save_image',  # 替换为你的 Python 节点文件名
    #        name='image_saver',
     #       output='screen'
      #  ),
    ])

