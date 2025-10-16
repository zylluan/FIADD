// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__TRAITS_HPP_

#include "px4_msgs/msg/detail/estimator_sensor_bias__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::EstimatorSensorBias & msg,
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

  // member: gyro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_device_id: ";
    value_to_yaml(msg.gyro_device_id, out);
    out << "\n";
  }

  // member: gyro_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_bias.size() == 0) {
      out << "gyro_bias: []\n";
    } else {
      out << "gyro_bias:\n";
      for (auto item : msg.gyro_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_bias_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_bias_limit: ";
    value_to_yaml(msg.gyro_bias_limit, out);
    out << "\n";
  }

  // member: gyro_bias_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_bias_variance.size() == 0) {
      out << "gyro_bias_variance: []\n";
    } else {
      out << "gyro_bias_variance:\n";
      for (auto item : msg.gyro_bias_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_bias_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_bias_valid: ";
    value_to_yaml(msg.gyro_bias_valid, out);
    out << "\n";
  }

  // member: gyro_bias_stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_bias_stable: ";
    value_to_yaml(msg.gyro_bias_stable, out);
    out << "\n";
  }

  // member: accel_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_device_id: ";
    value_to_yaml(msg.accel_device_id, out);
    out << "\n";
  }

  // member: accel_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_bias.size() == 0) {
      out << "accel_bias: []\n";
    } else {
      out << "accel_bias:\n";
      for (auto item : msg.accel_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_bias_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_bias_limit: ";
    value_to_yaml(msg.accel_bias_limit, out);
    out << "\n";
  }

  // member: accel_bias_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_bias_variance.size() == 0) {
      out << "accel_bias_variance: []\n";
    } else {
      out << "accel_bias_variance:\n";
      for (auto item : msg.accel_bias_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_bias_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_bias_valid: ";
    value_to_yaml(msg.accel_bias_valid, out);
    out << "\n";
  }

  // member: accel_bias_stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_bias_stable: ";
    value_to_yaml(msg.accel_bias_stable, out);
    out << "\n";
  }

  // member: mag_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_device_id: ";
    value_to_yaml(msg.mag_device_id, out);
    out << "\n";
  }

  // member: mag_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_bias.size() == 0) {
      out << "mag_bias: []\n";
    } else {
      out << "mag_bias:\n";
      for (auto item : msg.mag_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_bias_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_bias_limit: ";
    value_to_yaml(msg.mag_bias_limit, out);
    out << "\n";
  }

  // member: mag_bias_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_bias_variance.size() == 0) {
      out << "mag_bias_variance: []\n";
    } else {
      out << "mag_bias_variance:\n";
      for (auto item : msg.mag_bias_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_bias_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_bias_valid: ";
    value_to_yaml(msg.mag_bias_valid, out);
    out << "\n";
  }

  // member: mag_bias_stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_bias_stable: ";
    value_to_yaml(msg.mag_bias_stable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::EstimatorSensorBias & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorSensorBias>()
{
  return "px4_msgs::msg::EstimatorSensorBias";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorSensorBias>()
{
  return "px4_msgs/msg/EstimatorSensorBias";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorSensorBias>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorSensorBias>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorSensorBias>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__TRAITS_HPP_
