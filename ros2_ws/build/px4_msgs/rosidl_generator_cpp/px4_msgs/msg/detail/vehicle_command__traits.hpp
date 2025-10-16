// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleCommand & msg,
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

  // member: param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param1: ";
    value_to_yaml(msg.param1, out);
    out << "\n";
  }

  // member: param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param2: ";
    value_to_yaml(msg.param2, out);
    out << "\n";
  }

  // member: param3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param3: ";
    value_to_yaml(msg.param3, out);
    out << "\n";
  }

  // member: param4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param4: ";
    value_to_yaml(msg.param4, out);
    out << "\n";
  }

  // member: param5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param5: ";
    value_to_yaml(msg.param5, out);
    out << "\n";
  }

  // member: param6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param6: ";
    value_to_yaml(msg.param6, out);
    out << "\n";
  }

  // member: param7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param7: ";
    value_to_yaml(msg.param7, out);
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

  // member: source_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_system: ";
    value_to_yaml(msg.source_system, out);
    out << "\n";
  }

  // member: source_component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_component: ";
    value_to_yaml(msg.source_component, out);
    out << "\n";
  }

  // member: confirmation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirmation: ";
    value_to_yaml(msg.confirmation, out);
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

inline std::string to_yaml(const px4_msgs::msg::VehicleCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleCommand>()
{
  return "px4_msgs::msg::VehicleCommand";
}

template<>
inline const char * name<px4_msgs::msg::VehicleCommand>()
{
  return "px4_msgs/msg/VehicleCommand";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_
