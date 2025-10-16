// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RoverAttitudeStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/rover_attitude_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::RoverAttitudeStatus & msg,
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

  // member: measured_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_yaw: ";
    value_to_yaml(msg.measured_yaw, out);
    out << "\n";
  }

  // member: adjusted_yaw_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adjusted_yaw_setpoint: ";
    value_to_yaml(msg.adjusted_yaw_setpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::RoverAttitudeStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::RoverAttitudeStatus>()
{
  return "px4_msgs::msg::RoverAttitudeStatus";
}

template<>
inline const char * name<px4_msgs::msg::RoverAttitudeStatus>()
{
  return "px4_msgs/msg/RoverAttitudeStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RoverAttitudeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RoverAttitudeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RoverAttitudeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_STATUS__TRAITS_HPP_
