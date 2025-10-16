// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__TRAITS_HPP_

#include "px4_msgs/msg/detail/landing_target_pose__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::LandingTargetPose & msg,
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

  // member: is_static
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_static: ";
    value_to_yaml(msg.is_static, out);
    out << "\n";
  }

  // member: rel_pos_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_valid: ";
    value_to_yaml(msg.rel_pos_valid, out);
    out << "\n";
  }

  // member: rel_vel_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_vel_valid: ";
    value_to_yaml(msg.rel_vel_valid, out);
    out << "\n";
  }

  // member: x_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_rel: ";
    value_to_yaml(msg.x_rel, out);
    out << "\n";
  }

  // member: y_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_rel: ";
    value_to_yaml(msg.y_rel, out);
    out << "\n";
  }

  // member: z_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_rel: ";
    value_to_yaml(msg.z_rel, out);
    out << "\n";
  }

  // member: vx_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_rel: ";
    value_to_yaml(msg.vx_rel, out);
    out << "\n";
  }

  // member: vy_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy_rel: ";
    value_to_yaml(msg.vy_rel, out);
    out << "\n";
  }

  // member: cov_x_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_x_rel: ";
    value_to_yaml(msg.cov_x_rel, out);
    out << "\n";
  }

  // member: cov_y_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_y_rel: ";
    value_to_yaml(msg.cov_y_rel, out);
    out << "\n";
  }

  // member: cov_vx_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vx_rel: ";
    value_to_yaml(msg.cov_vx_rel, out);
    out << "\n";
  }

  // member: cov_vy_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vy_rel: ";
    value_to_yaml(msg.cov_vy_rel, out);
    out << "\n";
  }

  // member: abs_pos_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_pos_valid: ";
    value_to_yaml(msg.abs_pos_valid, out);
    out << "\n";
  }

  // member: x_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_abs: ";
    value_to_yaml(msg.x_abs, out);
    out << "\n";
  }

  // member: y_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_abs: ";
    value_to_yaml(msg.y_abs, out);
    out << "\n";
  }

  // member: z_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_abs: ";
    value_to_yaml(msg.z_abs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::LandingTargetPose & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::LandingTargetPose>()
{
  return "px4_msgs::msg::LandingTargetPose";
}

template<>
inline const char * name<px4_msgs::msg::LandingTargetPose>()
{
  return "px4_msgs/msg/LandingTargetPose";
}

template<>
struct has_fixed_size<px4_msgs::msg::LandingTargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::LandingTargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::LandingTargetPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__TRAITS_HPP_
