// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleCommandAck.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_command_ack__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleCommandAck & msg,
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

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: result_param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_param1: ";
    value_to_yaml(msg.result_param1, out);
    out << "\n";
  }

  // member: result_param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_param2: ";
    value_to_yaml(msg.result_param2, out);
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

  // member: from_external
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_external: ";
    value_to_yaml(msg.from_external, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleCommandAck & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleCommandAck>()
{
  return "px4_msgs::msg::VehicleCommandAck";
}

template<>
inline const char * name<px4_msgs::msg::VehicleCommandAck>()
{
  return "px4_msgs/msg/VehicleCommandAck";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleCommandAck>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleCommandAck>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleCommandAck>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__TRAITS_HPP_
