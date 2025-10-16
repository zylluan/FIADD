// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DifferentialPressure.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__TRAITS_HPP_

#include "px4_msgs/msg/detail/differential_pressure__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::DifferentialPressure & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: differential_pressure_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "differential_pressure_pa: ";
    value_to_yaml(msg.differential_pressure_pa, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_count: ";
    value_to_yaml(msg.error_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::DifferentialPressure & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::DifferentialPressure>()
{
  return "px4_msgs::msg::DifferentialPressure";
}

template<>
inline const char * name<px4_msgs::msg::DifferentialPressure>()
{
  return "px4_msgs/msg/DifferentialPressure";
}

template<>
struct has_fixed_size<px4_msgs::msg::DifferentialPressure>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DifferentialPressure>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DifferentialPressure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__TRAITS_HPP_
