// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalDeviceAttitudeStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/gimbal_device_attitude_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GimbalDeviceAttitudeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: target_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_system: ";
    value_to_yaml(msg.target_system, out);
    out << "\n";
  }

  // member: target_component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_component: ";
    value_to_yaml(msg.target_component, out);
    out << "\n";
  }

  // member: device_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_flags: ";
    value_to_yaml(msg.device_flags, out);
    out << "\n";
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_velocity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_x: ";
    value_to_yaml(msg.angular_velocity_x, out);
    out << "\n";
  }

  // member: angular_velocity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_y: ";
    value_to_yaml(msg.angular_velocity_y, out);
    out << "\n";
  }

  // member: angular_velocity_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_z: ";
    value_to_yaml(msg.angular_velocity_z, out);
    out << "\n";
  }

  // member: failure_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure_flags: ";
    value_to_yaml(msg.failure_flags, out);
    out << "\n";
  }

  // member: received_from_mavlink
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "received_from_mavlink: ";
    value_to_yaml(msg.received_from_mavlink, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalDeviceAttitudeStatus>()
{
  return "px4_msgs::msg::GimbalDeviceAttitudeStatus";
}

template<>
inline const char * name<px4_msgs::msg::GimbalDeviceAttitudeStatus>()
{
  return "px4_msgs/msg/GimbalDeviceAttitudeStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalDeviceAttitudeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalDeviceAttitudeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalDeviceAttitudeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__TRAITS_HPP_
