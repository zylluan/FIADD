// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CommanderState.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__TRAITS_HPP_

#include "px4_msgs/msg/detail/commander_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::CommanderState & msg,
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

  // member: main_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_state: ";
    value_to_yaml(msg.main_state, out);
    out << "\n";
  }

  // member: main_state_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_state_changes: ";
    value_to_yaml(msg.main_state_changes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::CommanderState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::CommanderState>()
{
  return "px4_msgs::msg::CommanderState";
}

template<>
inline const char * name<px4_msgs::msg::CommanderState>()
{
  return "px4_msgs/msg/CommanderState";
}

template<>
struct has_fixed_size<px4_msgs::msg::CommanderState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CommanderState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CommanderState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__TRAITS_HPP_
