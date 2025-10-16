// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RoverVelocityStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RoverVelocityStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RoverVelocityStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverVelocityStatus_
{
  using Type = RoverVelocityStatus_<ContainerAllocator>;

  explicit RoverVelocityStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->measured_speed_body_x = 0.0f;
      this->speed_body_x_setpoint = 0.0f;
      this->adjusted_speed_body_x_setpoint = 0.0f;
      this->measured_speed_body_y = 0.0f;
      this->speed_body_y_setpoint = 0.0f;
      this->adjusted_speed_body_y_setpoint = 0.0f;
      this->pid_throttle_body_x_integral = 0.0f;
      this->pid_throttle_body_y_integral = 0.0f;
    }
  }

  explicit RoverVelocityStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->measured_speed_body_x = 0.0f;
      this->speed_body_x_setpoint = 0.0f;
      this->adjusted_speed_body_x_setpoint = 0.0f;
      this->measured_speed_body_y = 0.0f;
      this->speed_body_y_setpoint = 0.0f;
      this->adjusted_speed_body_y_setpoint = 0.0f;
      this->pid_throttle_body_x_integral = 0.0f;
      this->pid_throttle_body_y_integral = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _measured_speed_body_x_type =
    float;
  _measured_speed_body_x_type measured_speed_body_x;
  using _speed_body_x_setpoint_type =
    float;
  _speed_body_x_setpoint_type speed_body_x_setpoint;
  using _adjusted_speed_body_x_setpoint_type =
    float;
  _adjusted_speed_body_x_setpoint_type adjusted_speed_body_x_setpoint;
  using _measured_speed_body_y_type =
    float;
  _measured_speed_body_y_type measured_speed_body_y;
  using _speed_body_y_setpoint_type =
    float;
  _speed_body_y_setpoint_type speed_body_y_setpoint;
  using _adjusted_speed_body_y_setpoint_type =
    float;
  _adjusted_speed_body_y_setpoint_type adjusted_speed_body_y_setpoint;
  using _pid_throttle_body_x_integral_type =
    float;
  _pid_throttle_body_x_integral_type pid_throttle_body_x_integral;
  using _pid_throttle_body_y_integral_type =
    float;
  _pid_throttle_body_y_integral_type pid_throttle_body_y_integral;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__measured_speed_body_x(
    const float & _arg)
  {
    this->measured_speed_body_x = _arg;
    return *this;
  }
  Type & set__speed_body_x_setpoint(
    const float & _arg)
  {
    this->speed_body_x_setpoint = _arg;
    return *this;
  }
  Type & set__adjusted_speed_body_x_setpoint(
    const float & _arg)
  {
    this->adjusted_speed_body_x_setpoint = _arg;
    return *this;
  }
  Type & set__measured_speed_body_y(
    const float & _arg)
  {
    this->measured_speed_body_y = _arg;
    return *this;
  }
  Type & set__speed_body_y_setpoint(
    const float & _arg)
  {
    this->speed_body_y_setpoint = _arg;
    return *this;
  }
  Type & set__adjusted_speed_body_y_setpoint(
    const float & _arg)
  {
    this->adjusted_speed_body_y_setpoint = _arg;
    return *this;
  }
  Type & set__pid_throttle_body_x_integral(
    const float & _arg)
  {
    this->pid_throttle_body_x_integral = _arg;
    return *this;
  }
  Type & set__pid_throttle_body_y_integral(
    const float & _arg)
  {
    this->pid_throttle_body_y_integral = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RoverVelocityStatus
    std::shared_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RoverVelocityStatus
    std::shared_ptr<px4_msgs::msg::RoverVelocityStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverVelocityStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->measured_speed_body_x != other.measured_speed_body_x) {
      return false;
    }
    if (this->speed_body_x_setpoint != other.speed_body_x_setpoint) {
      return false;
    }
    if (this->adjusted_speed_body_x_setpoint != other.adjusted_speed_body_x_setpoint) {
      return false;
    }
    if (this->measured_speed_body_y != other.measured_speed_body_y) {
      return false;
    }
    if (this->speed_body_y_setpoint != other.speed_body_y_setpoint) {
      return false;
    }
    if (this->adjusted_speed_body_y_setpoint != other.adjusted_speed_body_y_setpoint) {
      return false;
    }
    if (this->pid_throttle_body_x_integral != other.pid_throttle_body_x_integral) {
      return false;
    }
    if (this->pid_throttle_body_y_integral != other.pid_throttle_body_y_integral) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverVelocityStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverVelocityStatus_

// alias to use template instance with default allocator
using RoverVelocityStatus =
  px4_msgs::msg::RoverVelocityStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__STRUCT_HPP_
