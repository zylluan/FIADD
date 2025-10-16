// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TaskStackInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__TRAITS_HPP_

#include "px4_msgs/msg/detail/task_stack_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::TaskStackInfo & msg,
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

  // member: stack_free
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stack_free: ";
    value_to_yaml(msg.stack_free, out);
    out << "\n";
  }

  // member: task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.task_name.size() == 0) {
      out << "task_name: []\n";
    } else {
      out << "task_name:\n";
      for (auto item : msg.task_name) {
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

inline std::string to_yaml(const px4_msgs::msg::TaskStackInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::TaskStackInfo>()
{
  return "px4_msgs::msg::TaskStackInfo";
}

template<>
inline const char * name<px4_msgs::msg::TaskStackInfo>()
{
  return "px4_msgs/msg/TaskStackInfo";
}

template<>
struct has_fixed_size<px4_msgs::msg::TaskStackInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TaskStackInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TaskStackInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__TRAITS_HPP_
