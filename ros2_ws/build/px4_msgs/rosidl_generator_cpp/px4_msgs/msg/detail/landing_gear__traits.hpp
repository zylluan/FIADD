// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/LandingGear.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_GEAR__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_GEAR__TRAITS_HPP_

#include "px4_msgs/msg/detail/landing_gear__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::LandingGear & msg,
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

  // member: landing_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing_gear: ";
    value_to_yaml(msg.landing_gear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::LandingGear & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::LandingGear>()
{
  return "px4_msgs::msg::LandingGear";
}

template<>
inline const char * name<px4_msgs::msg::LandingGear>()
{
  return "px4_msgs/msg/LandingGear";
}

template<>
struct has_fixed_size<px4_msgs::msg::LandingGear>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::LandingGear>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::LandingGear>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_GEAR__TRAITS_HPP_
