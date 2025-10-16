// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CollisionConstraints.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__TRAITS_HPP_

#include "px4_msgs/msg/detail/collision_constraints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::CollisionConstraints & msg,
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

  // member: original_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.original_setpoint.size() == 0) {
      out << "original_setpoint: []\n";
    } else {
      out << "original_setpoint:\n";
      for (auto item : msg.original_setpoint) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: adapted_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.adapted_setpoint.size() == 0) {
      out << "adapted_setpoint: []\n";
    } else {
      out << "adapted_setpoint:\n";
      for (auto item : msg.adapted_setpoint) {
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

inline std::string to_yaml(const px4_msgs::msg::CollisionConstraints & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::CollisionConstraints>()
{
  return "px4_msgs::msg::CollisionConstraints";
}

template<>
inline const char * name<px4_msgs::msg::CollisionConstraints>()
{
  return "px4_msgs/msg/CollisionConstraints";
}

template<>
struct has_fixed_size<px4_msgs::msg::CollisionConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CollisionConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CollisionConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__TRAITS_HPP_
