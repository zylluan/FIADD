// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryBezier.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_trajectory_bezier__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'control_points'
#include "px4_msgs/msg/detail/trajectory_bezier__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleTrajectoryBezier & msg,
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

  // member: control_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.control_points.size() == 0) {
      out << "control_points: []\n";
    } else {
      out << "control_points:\n";
      for (auto item : msg.control_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bezier_order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bezier_order: ";
    value_to_yaml(msg.bezier_order, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleTrajectoryBezier & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleTrajectoryBezier>()
{
  return "px4_msgs::msg::VehicleTrajectoryBezier";
}

template<>
inline const char * name<px4_msgs::msg::VehicleTrajectoryBezier>()
{
  return "px4_msgs/msg/VehicleTrajectoryBezier";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleTrajectoryBezier>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::TrajectoryBezier>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleTrajectoryBezier>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::TrajectoryBezier>::value> {};

template<>
struct is_message<px4_msgs::msg::VehicleTrajectoryBezier>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__TRAITS_HPP_
