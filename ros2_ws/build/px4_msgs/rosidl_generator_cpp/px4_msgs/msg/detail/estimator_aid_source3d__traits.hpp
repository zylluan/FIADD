// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorAidSource3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE3D__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE3D__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_aid_source3d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorAidSource3d & msg,
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

  // member: estimator_instance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimator_instance: ";
    value_to_yaml(msg.estimator_instance, out);
    out << "\n";
  }

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: time_last_fuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_last_fuse: ";
    value_to_yaml(msg.time_last_fuse, out);
    out << "\n";
  }

  // member: observation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.observation.size() == 0) {
      out << "observation: []\n";
    } else {
      out << "observation:\n";
      for (auto item : msg.observation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: observation_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.observation_variance.size() == 0) {
      out << "observation_variance: []\n";
    } else {
      out << "observation_variance:\n";
      for (auto item : msg.observation_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innovation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innovation.size() == 0) {
      out << "innovation: []\n";
    } else {
      out << "innovation:\n";
      for (auto item : msg.innovation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innovation_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innovation_variance.size() == 0) {
      out << "innovation_variance: []\n";
    } else {
      out << "innovation_variance:\n";
      for (auto item : msg.innovation_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.test_ratio.size() == 0) {
      out << "test_ratio: []\n";
    } else {
      out << "test_ratio:\n";
      for (auto item : msg.test_ratio) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fusion_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusion_enabled: ";
    value_to_yaml(msg.fusion_enabled, out);
    out << "\n";
  }

  // member: innovation_rejected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innovation_rejected: ";
    value_to_yaml(msg.innovation_rejected, out);
    out << "\n";
  }

  // member: fused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fused: ";
    value_to_yaml(msg.fused, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorAidSource3d & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorAidSource3d>()
{
  return "px4_msgs::msg::EstimatorAidSource3d";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorAidSource3d>()
{
  return "px4_msgs/msg/EstimatorAidSource3d";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorAidSource3d>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorAidSource3d>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorAidSource3d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE3D__TRAITS_HPP_
