// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalManagerInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__TRAITS_HPP_

#include "px4_msgs/msg/detail/gimbal_manager_information__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GimbalManagerInformation & msg,
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

  // member: cap_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cap_flags: ";
    value_to_yaml(msg.cap_flags, out);
    out << "\n";
  }

  // member: gimbal_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_device_id: ";
    value_to_yaml(msg.gimbal_device_id, out);
    out << "\n";
  }

  // member: roll_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_min: ";
    value_to_yaml(msg.roll_min, out);
    out << "\n";
  }

  // member: roll_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_max: ";
    value_to_yaml(msg.roll_max, out);
    out << "\n";
  }

  // member: pitch_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_min: ";
    value_to_yaml(msg.pitch_min, out);
    out << "\n";
  }

  // member: pitch_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_max: ";
    value_to_yaml(msg.pitch_max, out);
    out << "\n";
  }

  // member: yaw_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_min: ";
    value_to_yaml(msg.yaw_min, out);
    out << "\n";
  }

  // member: yaw_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_max: ";
    value_to_yaml(msg.yaw_max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GimbalManagerInformation & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalManagerInformation>()
{
  return "px4_msgs::msg::GimbalManagerInformation";
}

template<>
inline const char * name<px4_msgs::msg::GimbalManagerInformation>()
{
  return "px4_msgs/msg/GimbalManagerInformation";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalManagerInformation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalManagerInformation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalManagerInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__TRAITS_HPP_
