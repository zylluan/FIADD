// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__TRAITS_HPP_

#include "px4_msgs/msg/detail/follow_target_estimator__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::FollowTargetEstimator & msg,
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

  // member: last_filter_reset_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_filter_reset_timestamp: ";
    value_to_yaml(msg.last_filter_reset_timestamp, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: stale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stale: ";
    value_to_yaml(msg.stale, out);
    out << "\n";
  }

  // member: lat_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_est: ";
    value_to_yaml(msg.lat_est, out);
    out << "\n";
  }

  // member: lon_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_est: ";
    value_to_yaml(msg.lon_est, out);
    out << "\n";
  }

  // member: alt_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_est: ";
    value_to_yaml(msg.alt_est, out);
    out << "\n";
  }

  // member: pos_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_est.size() == 0) {
      out << "pos_est: []\n";
    } else {
      out << "pos_est:\n";
      for (auto item : msg.pos_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_est.size() == 0) {
      out << "vel_est: []\n";
    } else {
      out << "vel_est:\n";
      for (auto item : msg.vel_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_est.size() == 0) {
      out << "acc_est: []\n";
    } else {
      out << "acc_est:\n";
      for (auto item : msg.acc_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prediction_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_count: ";
    value_to_yaml(msg.prediction_count, out);
    out << "\n";
  }

  // member: fusion_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusion_count: ";
    value_to_yaml(msg.fusion_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::FollowTargetEstimator & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::FollowTargetEstimator>()
{
  return "px4_msgs::msg::FollowTargetEstimator";
}

template<>
inline const char * name<px4_msgs::msg::FollowTargetEstimator>()
{
  return "px4_msgs/msg/FollowTargetEstimator";
}

template<>
struct has_fixed_size<px4_msgs::msg::FollowTargetEstimator>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FollowTargetEstimator>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FollowTargetEstimator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__TRAITS_HPP_
