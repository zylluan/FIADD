// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/HomePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOME_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__HOME_POSITION__TRAITS_HPP_

#include "px4_msgs/msg/detail/home_position__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::HomePosition & msg,
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

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: valid_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_alt: ";
    value_to_yaml(msg.valid_alt, out);
    out << "\n";
  }

  // member: valid_hpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_hpos: ";
    value_to_yaml(msg.valid_hpos, out);
    out << "\n";
  }

  // member: valid_lpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_lpos: ";
    value_to_yaml(msg.valid_lpos, out);
    out << "\n";
  }

  // member: manual_home
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_home: ";
    value_to_yaml(msg.manual_home, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::HomePosition & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::HomePosition>()
{
  return "px4_msgs::msg::HomePosition";
}

template<>
inline const char * name<px4_msgs::msg::HomePosition>()
{
  return "px4_msgs/msg/HomePosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::HomePosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::HomePosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::HomePosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__HOME_POSITION__TRAITS_HPP_
