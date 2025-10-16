// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MISSION_RESULT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MISSION_RESULT__TRAITS_HPP_

#include "px4_msgs/msg/detail/mission_result__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::MissionResult & msg,
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

  // member: instance_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instance_count: ";
    value_to_yaml(msg.instance_count, out);
    out << "\n";
  }

  // member: seq_reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_reached: ";
    value_to_yaml(msg.seq_reached, out);
    out << "\n";
  }

  // member: seq_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_current: ";
    value_to_yaml(msg.seq_current, out);
    out << "\n";
  }

  // member: seq_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_total: ";
    value_to_yaml(msg.seq_total, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning: ";
    value_to_yaml(msg.warning, out);
    out << "\n";
  }

  // member: finished
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finished: ";
    value_to_yaml(msg.finished, out);
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

  // member: item_do_jump_changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_do_jump_changed: ";
    value_to_yaml(msg.item_do_jump_changed, out);
    out << "\n";
  }

  // member: item_changed_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_changed_index: ";
    value_to_yaml(msg.item_changed_index, out);
    out << "\n";
  }

  // member: item_do_jump_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_do_jump_remaining: ";
    value_to_yaml(msg.item_do_jump_remaining, out);
    out << "\n";
  }

  // member: execution_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_mode: ";
    value_to_yaml(msg.execution_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::MissionResult & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::MissionResult>()
{
  return "px4_msgs::msg::MissionResult";
}

template<>
inline const char * name<px4_msgs::msg::MissionResult>()
{
  return "px4_msgs/msg/MissionResult";
}

template<>
struct has_fixed_size<px4_msgs::msg::MissionResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MissionResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MissionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MISSION_RESULT__TRAITS_HPP_
