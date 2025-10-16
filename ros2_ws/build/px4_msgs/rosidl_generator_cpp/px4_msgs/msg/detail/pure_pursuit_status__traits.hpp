// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PurePursuitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/pure_pursuit_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::PurePursuitStatus & msg,
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

  // member: lookahead_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lookahead_distance: ";
    value_to_yaml(msg.lookahead_distance, out);
    out << "\n";
  }

  // member: target_bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_bearing: ";
    value_to_yaml(msg.target_bearing, out);
    out << "\n";
  }

  // member: crosstrack_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crosstrack_error: ";
    value_to_yaml(msg.crosstrack_error, out);
    out << "\n";
  }

  // member: distance_to_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_waypoint: ";
    value_to_yaml(msg.distance_to_waypoint, out);
    out << "\n";
  }

  // member: bearing_to_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing_to_waypoint: ";
    value_to_yaml(msg.bearing_to_waypoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::PurePursuitStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::PurePursuitStatus>()
{
  return "px4_msgs::msg::PurePursuitStatus";
}

template<>
inline const char * name<px4_msgs::msg::PurePursuitStatus>()
{
  return "px4_msgs/msg/PurePursuitStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::PurePursuitStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PurePursuitStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PurePursuitStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__TRAITS_HPP_
