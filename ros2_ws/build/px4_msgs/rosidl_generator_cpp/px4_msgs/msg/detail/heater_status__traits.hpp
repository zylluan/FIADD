// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/HeaterStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HEATER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__HEATER_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/heater_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::HeaterStatus & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: heater_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heater_on: ";
    value_to_yaml(msg.heater_on, out);
    out << "\n";
  }

  // member: temperature_target_met
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_target_met: ";
    value_to_yaml(msg.temperature_target_met, out);
    out << "\n";
  }

  // member: temperature_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_sensor: ";
    value_to_yaml(msg.temperature_sensor, out);
    out << "\n";
  }

  // member: temperature_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_target: ";
    value_to_yaml(msg.temperature_target, out);
    out << "\n";
  }

  // member: controller_period_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_period_usec: ";
    value_to_yaml(msg.controller_period_usec, out);
    out << "\n";
  }

  // member: controller_time_on_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_time_on_usec: ";
    value_to_yaml(msg.controller_time_on_usec, out);
    out << "\n";
  }

  // member: proportional_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proportional_value: ";
    value_to_yaml(msg.proportional_value, out);
    out << "\n";
  }

  // member: integrator_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrator_value: ";
    value_to_yaml(msg.integrator_value, out);
    out << "\n";
  }

  // member: feed_forward_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feed_forward_value: ";
    value_to_yaml(msg.feed_forward_value, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::HeaterStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::HeaterStatus>()
{
  return "px4_msgs::msg::HeaterStatus";
}

template<>
inline const char * name<px4_msgs::msg::HeaterStatus>()
{
  return "px4_msgs/msg/HeaterStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::HeaterStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::HeaterStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::HeaterStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__HEATER_STATUS__TRAITS_HPP_
