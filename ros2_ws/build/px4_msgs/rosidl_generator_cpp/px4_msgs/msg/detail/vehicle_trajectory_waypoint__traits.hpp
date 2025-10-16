// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_trajectory_waypoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'waypoints'
#include "px4_msgs/msg/detail/trajectory_waypoint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleTrajectoryWaypoint & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleTrajectoryWaypoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleTrajectoryWaypoint>()
{
  return "px4_msgs::msg::VehicleTrajectoryWaypoint";
}

template<>
inline const char * name<px4_msgs::msg::VehicleTrajectoryWaypoint>()
{
  return "px4_msgs/msg/VehicleTrajectoryWaypoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleTrajectoryWaypoint>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::TrajectoryWaypoint>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleTrajectoryWaypoint>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::TrajectoryWaypoint>::value> {};

template<>
struct is_message<px4_msgs::msg::VehicleTrajectoryWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__TRAITS_HPP_
