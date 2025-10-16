// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/position_controller_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::PositionControllerStatus & msg,
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

  // member: nav_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_roll: ";
    value_to_yaml(msg.nav_roll, out);
    out << "\n";
  }

  // member: nav_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_pitch: ";
    value_to_yaml(msg.nav_pitch, out);
    out << "\n";
  }

  // member: nav_bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_bearing: ";
    value_to_yaml(msg.nav_bearing, out);
    out << "\n";
  }

  // member: target_bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_bearing: ";
    value_to_yaml(msg.target_bearing, out);
    out << "\n";
  }

  // member: xtrack_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xtrack_error: ";
    value_to_yaml(msg.xtrack_error, out);
    out << "\n";
  }

  // member: wp_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wp_dist: ";
    value_to_yaml(msg.wp_dist, out);
    out << "\n";
  }

  // member: acceptance_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceptance_radius: ";
    value_to_yaml(msg.acceptance_radius, out);
    out << "\n";
  }

  // member: yaw_acceptance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_acceptance: ";
    value_to_yaml(msg.yaw_acceptance, out);
    out << "\n";
  }

  // member: altitude_acceptance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_acceptance: ";
    value_to_yaml(msg.altitude_acceptance, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::PositionControllerStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::PositionControllerStatus>()
{
  return "px4_msgs::msg::PositionControllerStatus";
}

template<>
inline const char * name<px4_msgs::msg::PositionControllerStatus>()
{
  return "px4_msgs/msg/PositionControllerStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionControllerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionControllerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PositionControllerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__TRAITS_HPP_
