// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FollowTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/follow_target_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::FollowTargetStatus & msg,
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

  // member: tracked_target_course
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_target_course: ";
    value_to_yaml(msg.tracked_target_course, out);
    out << "\n";
  }

  // member: follow_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "follow_angle: ";
    value_to_yaml(msg.follow_angle, out);
    out << "\n";
  }

  // member: orbit_angle_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orbit_angle_setpoint: ";
    value_to_yaml(msg.orbit_angle_setpoint, out);
    out << "\n";
  }

  // member: angular_rate_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_setpoint: ";
    value_to_yaml(msg.angular_rate_setpoint, out);
    out << "\n";
  }

  // member: desired_position_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired_position_raw.size() == 0) {
      out << "desired_position_raw: []\n";
    } else {
      out << "desired_position_raw:\n";
      for (auto item : msg.desired_position_raw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: in_emergency_ascent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_emergency_ascent: ";
    value_to_yaml(msg.in_emergency_ascent, out);
    out << "\n";
  }

  // member: gimbal_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_pitch: ";
    value_to_yaml(msg.gimbal_pitch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::FollowTargetStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::FollowTargetStatus>()
{
  return "px4_msgs::msg::FollowTargetStatus";
}

template<>
inline const char * name<px4_msgs::msg::FollowTargetStatus>()
{
  return "px4_msgs/msg/FollowTargetStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::FollowTargetStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FollowTargetStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FollowTargetStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__TRAITS_HPP_
