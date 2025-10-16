// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OpenDroneIdOperatorId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_OPERATOR_ID__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_OPERATOR_ID__TRAITS_HPP_

#include "px4_msgs/msg/detail/open_drone_id_operator_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::OpenDroneIdOperatorId & msg,
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

  // member: id_or_mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id_or_mac.size() == 0) {
      out << "id_or_mac: []\n";
    } else {
      out << "id_or_mac:\n";
      for (auto item : msg.id_or_mac) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: operator_id_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_id_type: ";
    value_to_yaml(msg.operator_id_type, out);
    out << "\n";
  }

  // member: operator_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.operator_id.size() == 0) {
      out << "operator_id: []\n";
    } else {
      out << "operator_id:\n";
      for (auto item : msg.operator_id) {
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

inline std::string to_yaml(const px4_msgs::msg::OpenDroneIdOperatorId & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::OpenDroneIdOperatorId>()
{
  return "px4_msgs::msg::OpenDroneIdOperatorId";
}

template<>
inline const char * name<px4_msgs::msg::OpenDroneIdOperatorId>()
{
  return "px4_msgs/msg/OpenDroneIdOperatorId";
}

template<>
struct has_fixed_size<px4_msgs::msg::OpenDroneIdOperatorId>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OpenDroneIdOperatorId>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OpenDroneIdOperatorId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_OPERATOR_ID__TRAITS_HPP_
