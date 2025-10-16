// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ActuatorControlsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/actuator_controls_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ActuatorControlsStatus & msg,
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

  // member: control_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.control_power.size() == 0) {
      out << "control_power: []\n";
    } else {
      out << "control_power:\n";
      for (auto item : msg.control_power) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ActuatorControlsStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ActuatorControlsStatus>()
{
  return "px4_msgs::msg::ActuatorControlsStatus";
}

template<>
inline const char * name<px4_msgs::msg::ActuatorControlsStatus>()
{
  return "px4_msgs/msg/ActuatorControlsStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::ActuatorControlsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ActuatorControlsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ActuatorControlsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS__TRAITS_HPP_
