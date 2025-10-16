// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FigureEightStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/figure_eight_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::FigureEightStatus & msg,
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

  // member: major_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "major_radius: ";
    value_to_yaml(msg.major_radius, out);
    out << "\n";
  }

  // member: minor_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minor_radius: ";
    value_to_yaml(msg.minor_radius, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    value_to_yaml(msg.frame, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::FigureEightStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::FigureEightStatus>()
{
  return "px4_msgs::msg::FigureEightStatus";
}

template<>
inline const char * name<px4_msgs::msg::FigureEightStatus>()
{
  return "px4_msgs/msg/FigureEightStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::FigureEightStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FigureEightStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FigureEightStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FIGURE_EIGHT_STATUS__TRAITS_HPP_
