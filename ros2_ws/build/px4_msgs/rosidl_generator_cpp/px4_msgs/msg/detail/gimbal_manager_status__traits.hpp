// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalManagerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/gimbal_manager_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GimbalManagerStatus & msg,
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

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    value_to_yaml(msg.flags, out);
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

  // member: primary_control_sysid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary_control_sysid: ";
    value_to_yaml(msg.primary_control_sysid, out);
    out << "\n";
  }

  // member: primary_control_compid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary_control_compid: ";
    value_to_yaml(msg.primary_control_compid, out);
    out << "\n";
  }

  // member: secondary_control_sysid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondary_control_sysid: ";
    value_to_yaml(msg.secondary_control_sysid, out);
    out << "\n";
  }

  // member: secondary_control_compid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondary_control_compid: ";
    value_to_yaml(msg.secondary_control_compid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GimbalManagerStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalManagerStatus>()
{
  return "px4_msgs::msg::GimbalManagerStatus";
}

template<>
inline const char * name<px4_msgs::msg::GimbalManagerStatus>()
{
  return "px4_msgs/msg/GimbalManagerStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalManagerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalManagerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalManagerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__TRAITS_HPP_
