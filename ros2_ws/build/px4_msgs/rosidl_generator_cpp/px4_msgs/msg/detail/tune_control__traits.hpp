// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TuneControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__TRAITS_HPP_

#include "px4_msgs/msg/detail/tune_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::TuneControl & msg,
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

  // member: tune_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tune_id: ";
    value_to_yaml(msg.tune_id, out);
    out << "\n";
  }

  // member: tune_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tune_override: ";
    value_to_yaml(msg.tune_override, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: silence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "silence: ";
    value_to_yaml(msg.silence, out);
    out << "\n";
  }

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    value_to_yaml(msg.volume, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::TuneControl & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::TuneControl>()
{
  return "px4_msgs::msg::TuneControl";
}

template<>
inline const char * name<px4_msgs::msg::TuneControl>()
{
  return "px4_msgs/msg/TuneControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::TuneControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TuneControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TuneControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__TRAITS_HPP_
