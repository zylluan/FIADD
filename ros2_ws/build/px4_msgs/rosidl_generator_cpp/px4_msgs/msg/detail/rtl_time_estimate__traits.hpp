// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RtlTimeEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__TRAITS_HPP_

#include "px4_msgs/msg/detail/rtl_time_estimate__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::RtlTimeEstimate & msg,
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

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: time_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_estimate: ";
    value_to_yaml(msg.time_estimate, out);
    out << "\n";
  }

  // member: safe_time_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_time_estimate: ";
    value_to_yaml(msg.safe_time_estimate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::RtlTimeEstimate & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::RtlTimeEstimate>()
{
  return "px4_msgs::msg::RtlTimeEstimate";
}

template<>
inline const char * name<px4_msgs::msg::RtlTimeEstimate>()
{
  return "px4_msgs/msg/RtlTimeEstimate";
}

template<>
struct has_fixed_size<px4_msgs::msg::RtlTimeEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RtlTimeEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RtlTimeEstimate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__TRAITS_HPP_
