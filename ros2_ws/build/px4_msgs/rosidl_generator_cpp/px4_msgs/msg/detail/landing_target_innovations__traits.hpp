// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/LandingTargetInnovations.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__TRAITS_HPP_

#include "px4_msgs/msg/detail/landing_target_innovations__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::LandingTargetInnovations & msg,
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

  // member: innov_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_x: ";
    value_to_yaml(msg.innov_x, out);
    out << "\n";
  }

  // member: innov_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_y: ";
    value_to_yaml(msg.innov_y, out);
    out << "\n";
  }

  // member: innov_cov_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_cov_x: ";
    value_to_yaml(msg.innov_cov_x, out);
    out << "\n";
  }

  // member: innov_cov_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov_cov_y: ";
    value_to_yaml(msg.innov_cov_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::LandingTargetInnovations & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::LandingTargetInnovations>()
{
  return "px4_msgs::msg::LandingTargetInnovations";
}

template<>
inline const char * name<px4_msgs::msg::LandingTargetInnovations>()
{
  return "px4_msgs/msg/LandingTargetInnovations";
}

template<>
struct has_fixed_size<px4_msgs::msg::LandingTargetInnovations>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::LandingTargetInnovations>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::LandingTargetInnovations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__TRAITS_HPP_
