// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/yaw_estimator_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::YawEstimatorStatus & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: yaw_composite
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_composite: ";
    value_to_yaml(msg.yaw_composite, out);
    out << "\n";
  }

  // member: yaw_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_variance: ";
    value_to_yaml(msg.yaw_variance, out);
    out << "\n";
  }

  // member: yaw_composite_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_composite_valid: ";
    value_to_yaml(msg.yaw_composite_valid, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw.size() == 0) {
      out << "yaw: []\n";
    } else {
      out << "yaw:\n";
      for (auto item : msg.yaw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innov_vn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innov_vn.size() == 0) {
      out << "innov_vn: []\n";
    } else {
      out << "innov_vn:\n";
      for (auto item : msg.innov_vn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innov_ve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innov_ve.size() == 0) {
      out << "innov_ve: []\n";
    } else {
      out << "innov_ve:\n";
      for (auto item : msg.innov_ve) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.weight.size() == 0) {
      out << "weight: []\n";
    } else {
      out << "weight:\n";
      for (auto item : msg.weight) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::YawEstimatorStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::YawEstimatorStatus>()
{
  return "px4_msgs::msg::YawEstimatorStatus";
}

template<>
inline const char * name<px4_msgs::msg::YawEstimatorStatus>()
{
  return "px4_msgs/msg/YawEstimatorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::YawEstimatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::YawEstimatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::YawEstimatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__TRAITS_HPP_
