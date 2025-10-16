// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GeneratorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/generator_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GeneratorStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_current: ";
    value_to_yaml(msg.battery_current, out);
    out << "\n";
  }

  // member: load_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_current: ";
    value_to_yaml(msg.load_current, out);
    out << "\n";
  }

  // member: power_generated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_generated: ";
    value_to_yaml(msg.power_generated, out);
    out << "\n";
  }

  // member: bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_voltage: ";
    value_to_yaml(msg.bus_voltage, out);
    out << "\n";
  }

  // member: bat_current_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_current_setpoint: ";
    value_to_yaml(msg.bat_current_setpoint, out);
    out << "\n";
  }

  // member: runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "runtime: ";
    value_to_yaml(msg.runtime, out);
    out << "\n";
  }

  // member: time_until_maintenance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_until_maintenance: ";
    value_to_yaml(msg.time_until_maintenance, out);
    out << "\n";
  }

  // member: generator_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_speed: ";
    value_to_yaml(msg.generator_speed, out);
    out << "\n";
  }

  // member: rectifier_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rectifier_temperature: ";
    value_to_yaml(msg.rectifier_temperature, out);
    out << "\n";
  }

  // member: generator_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_temperature: ";
    value_to_yaml(msg.generator_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GeneratorStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GeneratorStatus>()
{
  return "px4_msgs::msg::GeneratorStatus";
}

template<>
inline const char * name<px4_msgs::msg::GeneratorStatus>()
{
  return "px4_msgs/msg/GeneratorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::GeneratorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GeneratorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GeneratorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__TRAITS_HPP_
