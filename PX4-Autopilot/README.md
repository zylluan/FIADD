# PX4

### PX4详细介绍在 PX4_README.md

### 如何为PX4添加新的可支持的模型
1. 编写model.sdf.jinja文件，位置PX4-Autopilot/Tools/simulation/gazebo-classic/sitl_gazebo-classic/models/${MODEL}/${MODEL}.sdf.jinja
  
2. 在PX4-Autopilot/ROMFS/px4fmu_common/init.d-posix/airframes目录下添加模型的仿真配置文件，命名规则[新id]_[名字]，然后在该目录下的CMakeLists中添加该模型
   
3. 回到上层目录：colcon make 

### 运行PX4
  方法1：使用make指令:   make  [VENDOR_][MODEL][_VARIANT]   [VIEWER_MODEL_DEBUGGER_WORLD]，如运行 make px4_sitl_default gazebo




  方法2：运行PX4-Autopilot/Tools/simulation/gazebo-classic目录下相应脚本

### Gazebo
Gazebo需要的一些模块源文件可以保存在最上层的.gazebo中，可以避免从远程拉取，节省时间。其他路径可以查看环境变量：GAZEBO_MADEL_PATH


