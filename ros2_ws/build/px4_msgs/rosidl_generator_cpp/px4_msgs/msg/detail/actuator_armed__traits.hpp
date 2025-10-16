// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ActuatorArmed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__TRAITS_HPP_

#include "px4_msgs/msg/detail/actuator_armed__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ActuatorArmed & msg,
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

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: prearmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prearmed: ";
    value_to_yaml(msg.prearmed, out);
    out << "\n";
  }

  // member: ready_to_arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready_to_arm: ";
    value_to_yaml(msg.ready_to_arm, out);
    out << "\n";
  }

  // member: lockdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lockdown: ";
    value_to_yaml(msg.lockdown, out);
    out << "\n";
  }

  // member: manual_lockdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_lockdown: ";
    value_to_yaml(msg.manual_lockdown, out);
    out << "\n";
  }

  // member: force_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_failsafe: ";
    value_to_yaml(msg.force_failsafe, out);
    out << "\n";
  }

  // member: in_esc_calibration_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_esc_calibration_mode: ";
    value_to_yaml(msg.in_esc_calibration_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ActuatorArmed & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ActuatorArmed>()
{
  return "px4_msgs::msg::ActuatorArmed";
}

template<>
inline const char * name<px4_msgs::msg::ActuatorArmed>()
{
  return "px4_msgs/msg/ActuatorArmed";
}

template<>
struct has_fixed_size<px4_msgs::msg::ActuatorArmed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ActuatorArmed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ActuatorArmed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__TRAITS_HPP_
