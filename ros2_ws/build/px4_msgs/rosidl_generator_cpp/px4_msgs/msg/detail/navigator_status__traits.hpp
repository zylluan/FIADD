// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/NavigatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/navigator_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::NavigatorStatus & msg,
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

  // member: nav_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state: ";
    value_to_yaml(msg.nav_state, out);
    out << "\n";
  }

  // member: failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure: ";
    value_to_yaml(msg.failure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::NavigatorStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::NavigatorStatus>()
{
  return "px4_msgs::msg::NavigatorStatus";
}

template<>
inline const char * name<px4_msgs::msg::NavigatorStatus>()
{
  return "px4_msgs/msg/NavigatorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::NavigatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::NavigatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::NavigatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__TRAITS_HPP_
