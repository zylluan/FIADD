// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalManagerSetManualControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__TRAITS_HPP_

#include "px4_msgs/msg/detail/gimbal_manager_set_manual_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GimbalManagerSetManualControl & msg,
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

  // member: origin_sysid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_sysid: ";
    value_to_yaml(msg.origin_sysid, out);
    out << "\n";
  }

  // member: origin_compid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_compid: ";
    value_to_yaml(msg.origin_compid, out);
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

  // member: gimbal_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_device_id: ";
    value_to_yaml(msg.gimbal_device_id, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rate: ";
    value_to_yaml(msg.pitch_rate, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GimbalManagerSetManualControl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalManagerSetManualControl>()
{
  return "px4_msgs::msg::GimbalManagerSetManualControl";
}

template<>
inline const char * name<px4_msgs::msg::GimbalManagerSetManualControl>()
{
  return "px4_msgs/msg/GimbalManagerSetManualControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalManagerSetManualControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalManagerSetManualControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalManagerSetManualControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__TRAITS_HPP_
