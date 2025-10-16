// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CollisionReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__TRAITS_HPP_

#include "px4_msgs/msg/detail/collision_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::CollisionReport & msg,
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

  // member: src
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "src: ";
    value_to_yaml(msg.src, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: threat_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threat_level: ";
    value_to_yaml(msg.threat_level, out);
    out << "\n";
  }

  // member: time_to_minimum_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_minimum_delta: ";
    value_to_yaml(msg.time_to_minimum_delta, out);
    out << "\n";
  }

  // member: altitude_minimum_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_minimum_delta: ";
    value_to_yaml(msg.altitude_minimum_delta, out);
    out << "\n";
  }

  // member: horizontal_minimum_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_minimum_delta: ";
    value_to_yaml(msg.horizontal_minimum_delta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::CollisionReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::CollisionReport>()
{
  return "px4_msgs::msg::CollisionReport";
}

template<>
inline const char * name<px4_msgs::msg::CollisionReport>()
{
  return "px4_msgs/msg/CollisionReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::CollisionReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CollisionReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CollisionReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__TRAITS_HPP_
