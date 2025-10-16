// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__TRAITS_HPP_

#include "px4_msgs/msg/detail/obstacle_distance__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ObstacleDistance & msg,
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

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: sensor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_type: ";
    value_to_yaml(msg.sensor_type, out);
    out << "\n";
  }

  // member: distances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distances.size() == 0) {
      out << "distances: []\n";
    } else {
      out << "distances:\n";
      for (auto item : msg.distances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "increment: ";
    value_to_yaml(msg.increment, out);
    out << "\n";
  }

  // member: min_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_distance: ";
    value_to_yaml(msg.min_distance, out);
    out << "\n";
  }

  // member: max_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_distance: ";
    value_to_yaml(msg.max_distance, out);
    out << "\n";
  }

  // member: angle_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_offset: ";
    value_to_yaml(msg.angle_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ObstacleDistance & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ObstacleDistance>()
{
  return "px4_msgs::msg::ObstacleDistance";
}

template<>
inline const char * name<px4_msgs::msg::ObstacleDistance>()
{
  return "px4_msgs/msg/ObstacleDistance";
}

template<>
struct has_fixed_size<px4_msgs::msg::ObstacleDistance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ObstacleDistance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ObstacleDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__TRAITS_HPP_
