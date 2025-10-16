// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorVisualOdometryAligned.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_VISUAL_ODOMETRY_ALIGNED__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_VISUAL_ODOMETRY_ALIGNED__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_visual_odometry_aligned__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorVisualOdometryAligned & msg,
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

  // member: local_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_frame: ";
    value_to_yaml(msg.local_frame, out);
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

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_offset.size() == 0) {
      out << "q_offset: []\n";
    } else {
      out << "q_offset:\n";
      for (auto item : msg.q_offset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pose_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_covariance.size() == 0) {
      out << "pose_covariance: []\n";
    } else {
      out << "pose_covariance:\n";
      for (auto item : msg.pose_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_frame: ";
    value_to_yaml(msg.velocity_frame, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: rollspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rollspeed: ";
    value_to_yaml(msg.rollspeed, out);
    out << "\n";
  }

  // member: pitchspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitchspeed: ";
    value_to_yaml(msg.pitchspeed, out);
    out << "\n";
  }

  // member: yawspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed: ";
    value_to_yaml(msg.yawspeed, out);
    out << "\n";
  }

  // member: velocity_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_covariance.size() == 0) {
      out << "velocity_covariance: []\n";
    } else {
      out << "velocity_covariance:\n";
      for (auto item : msg.velocity_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_counter: ";
    value_to_yaml(msg.reset_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorVisualOdometryAligned & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorVisualOdometryAligned>()
{
  return "px4_msgs::msg::EstimatorVisualOdometryAligned";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorVisualOdometryAligned>()
{
  return "px4_msgs/msg/EstimatorVisualOdometryAligned";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorVisualOdometryAligned>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorVisualOdometryAligned>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorVisualOdometryAligned>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_VISUAL_ODOMETRY_ALIGNED__TRAITS_HPP_
