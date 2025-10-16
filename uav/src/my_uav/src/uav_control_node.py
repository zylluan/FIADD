import os

def run_ros2_command():
    command = "ros2 run px4_ros_com vel_yaw --ros-args -p vel:=1.0 -p angle:=45"
    # 使用 os.system 执行命令
    os.system(command)

run_ros2_command()

"""
import subprocess

def run_ros2_command():
    command = ["ros2", "run", "px4_ros_com", "vel_yaw", "--ros-args", "-p", "vel:=1.0", "-p", "angle:=45"]
    
    # 异步执行命令
    process = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = process.communicate()
    
    # 输出结果
    print("Standard Output:", stdout.decode())
    print("Standard Error:", stderr.decode())

run_ros2_command()
"""


