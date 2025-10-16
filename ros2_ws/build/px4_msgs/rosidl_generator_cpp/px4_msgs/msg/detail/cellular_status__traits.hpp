// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/cellular_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::CellularStatus & msg,
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

  // member: failure_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure_reason: ";
    value_to_yaml(msg.failure_reason, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: mcc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcc: ";
    value_to_yaml(msg.mcc, out);
    out << "\n";
  }

  // member: mnc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mnc: ";
    value_to_yaml(msg.mnc, out);
    out << "\n";
  }

  // member: lac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lac: ";
    value_to_yaml(msg.lac, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::CellularStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::CellularStatus>()
{
  return "px4_msgs::msg::CellularStatus";
}

template<>
inline const char * name<px4_msgs::msg::CellularStatus>()
{
  return "px4_msgs/msg/CellularStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::CellularStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CellularStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CellularStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__TRAITS_HPP_
