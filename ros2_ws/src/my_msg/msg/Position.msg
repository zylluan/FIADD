# x y z 
# 1 注意消息类型不能写float，可参考其他msg文件
# 2 .msg文件的命名格式：以大写字母开头，后面可以跟大写字母、小写字母或数字。
# 3 可以使用：ros2 interface show 包名/msg/.msg名 来查看某个消息类型的具体内容(其实时一种消息的接口)
# 4 msg文件中也能使用其他消息类型的内容，需要在两个配置文件中添加依赖：https://docs.ros.org/en/galactic/Tutorials/Beginner-Client-Libraries/Custom-ROS2-Interfaces.html#create-a-new-package
# 5 只需要写.msg文件，然后在配置文件中加上新消息，然后colcon就可以，会自动在install目录下构建对应的hpp等文件



float32 x 
float32 y
float32 z



# 6 使用方法：include "my_msg/msg/position.hpp"       topic: /px4_n/position"
