// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TimesyncStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/timesync_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::TimesyncStatus & msg,
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

  // member: source_protocol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_protocol: ";
    value_to_yaml(msg.source_protocol, out);
    out << "\n";
  }

  // member: remote_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_timestamp: ";
    value_to_yaml(msg.remote_timestamp, out);
    out << "\n";
  }

  // member: observed_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "observed_offset: ";
    value_to_yaml(msg.observed_offset, out);
    out << "\n";
  }

  // member: estimated_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_offset: ";
    value_to_yaml(msg.estimated_offset, out);
    out << "\n";
  }

  // member: round_trip_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "round_trip_time: ";
    value_to_yaml(msg.round_trip_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::TimesyncStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::TimesyncStatus>()
{
  return "px4_msgs::msg::TimesyncStatus";
}

template<>
inline const char * name<px4_msgs::msg::TimesyncStatus>()
{
  return "px4_msgs/msg/TimesyncStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::TimesyncStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TimesyncStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TimesyncStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__TRAITS_HPP_
