// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RoverVelocityStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/rover_velocity_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::RoverVelocityStatus & msg,
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

  // member: measured_speed_body_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_speed_body_x: ";
    value_to_yaml(msg.measured_speed_body_x, out);
    out << "\n";
  }

  // member: speed_body_x_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_body_x_setpoint: ";
    value_to_yaml(msg.speed_body_x_setpoint, out);
    out << "\n";
  }

  // member: adjusted_speed_body_x_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adjusted_speed_body_x_setpoint: ";
    value_to_yaml(msg.adjusted_speed_body_x_setpoint, out);
    out << "\n";
  }

  // member: measured_speed_body_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_speed_body_y: ";
    value_to_yaml(msg.measured_speed_body_y, out);
    out << "\n";
  }

  // member: speed_body_y_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_body_y_setpoint: ";
    value_to_yaml(msg.speed_body_y_setpoint, out);
    out << "\n";
  }

  // member: adjusted_speed_body_y_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adjusted_speed_body_y_setpoint: ";
    value_to_yaml(msg.adjusted_speed_body_y_setpoint, out);
    out << "\n";
  }

  // member: pid_throttle_body_x_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_throttle_body_x_integral: ";
    value_to_yaml(msg.pid_throttle_body_x_integral, out);
    out << "\n";
  }

  // member: pid_throttle_body_y_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_throttle_body_y_integral: ";
    value_to_yaml(msg.pid_throttle_body_y_integral, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::RoverVelocityStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::RoverVelocityStatus>()
{
  return "px4_msgs::msg::RoverVelocityStatus";
}

template<>
inline const char * name<px4_msgs::msg::RoverVelocityStatus>()
{
  return "px4_msgs/msg/RoverVelocityStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RoverVelocityStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RoverVelocityStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RoverVelocityStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_VELOCITY_STATUS__TRAITS_HPP_
