// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Airspeed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED__TRAITS_HPP_

#include "px4_msgs/msg/detail/airspeed__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::Airspeed & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: indicated_airspeed_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indicated_airspeed_m_s: ";
    value_to_yaml(msg.indicated_airspeed_m_s, out);
    out << "\n";
  }

  // member: true_airspeed_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_m_s: ";
    value_to_yaml(msg.true_airspeed_m_s, out);
    out << "\n";
  }

  // member: air_temperature_celsius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_temperature_celsius: ";
    value_to_yaml(msg.air_temperature_celsius, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::Airspeed & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::Airspeed>()
{
  return "px4_msgs::msg::Airspeed";
}

template<>
inline const char * name<px4_msgs::msg::Airspeed>()
{
  return "px4_msgs/msg/Airspeed";
}

template<>
struct has_fixed_size<px4_msgs::msg::Airspeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Airspeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Airspeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED__TRAITS_HPP_
