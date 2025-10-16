// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalDeviceSetAttitude.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_SET_ATTITUDE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_SET_ATTITUDE__TRAITS_HPP_

#include "px4_msgs/msg/detail/gimbal_device_set_attitude__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GimbalDeviceSetAttitude & msg,
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

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    value_to_yaml(msg.flags, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GimbalDeviceSetAttitude & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalDeviceSetAttitude>()
{
  return "px4_msgs::msg::GimbalDeviceSetAttitude";
}

template<>
inline const char * name<px4_msgs::msg::GimbalDeviceSetAttitude>()
{
  return "px4_msgs/msg/GimbalDeviceSetAttitude";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalDeviceSetAttitude>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalDeviceSetAttitude>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalDeviceSetAttitude>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_SET_ATTITUDE__TRAITS_HPP_
