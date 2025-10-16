# This is similar to the mavlink message ATTITUDE_QUATERNION, but for onboard use

uint64 timestamp                # time since system start (microseconds)

uint64 timestamp_sample         # the timestamp of the raw data 原始数据的时间戳(microseconds)

float32[4] q                    # 从FRD（Front无人机前方-Right右-Down下）机体坐标系到NED（North北-East东-Down下）地理坐标系的四元数旋转。Quaternion rotation from the FRD body frame to the NED earth frame
float32[4] delta_q_reset        # Amount by which quaternion has changed during last reset，记录了在姿态估计器（比如EKF）进行重置时，无人机姿态四元数的变化，姿态估计器检测到异常或需要重置时，delta_q_reset 可以用来调整当前的姿态估计，确保系统能够平滑地过渡到新的状态
uint8 quat_reset_counter        # Quaternion reset counter 四元数重置计数器。


# TOPICS vehicle_attitude vehicle_attitude_groundtruth external_ins_attitude
# TOPICS estimator_attitude

#这个消息可能被发布到的ROS 2话题: vehicle_attitude：无人机的当前姿态。vehicle_attitude_groundtruth：无人机的真实姿态（用于仿真或测试）。external_ins_attitude：外部惯性导航系统（INS）提供的姿态信息。estimator_attitude：姿态估计器输出的姿态信息。
# 四元数是一种用于表示三维旋转的数学工具，四元数由四个部分组成：一个实部和三个虚部，通常表示为 q=[w,x,y,z]，其中 w 是实部，x,y,z 是虚部。
#从FRD到NED的四元数旋转描述了无人机的机体坐标系相对于地理坐标系的旋转。具体来说，这个四元数 q 表示了如何将FRD坐标系中的一个向量旋转到NED坐标系中。 
