// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/vehicle_imu_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::VehicleImuStatus & msg,
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

  // member: accel_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_device_id: ";
    value_to_yaml(msg.accel_device_id, out);
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

  // member: accel_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_clipping.size() == 0) {
      out << "accel_clipping: []\n";
    } else {
      out << "accel_clipping:\n";
      for (auto item : msg.accel_clipping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_clipping.size() == 0) {
      out << "gyro_clipping: []\n";
    } else {
      out << "gyro_clipping:\n";
      for (auto item : msg.gyro_clipping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_error_count: ";
    value_to_yaml(msg.accel_error_count, out);
    out << "\n";
  }

  // member: gyro_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_error_count: ";
    value_to_yaml(msg.gyro_error_count, out);
    out << "\n";
  }

  // member: accel_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_rate_hz: ";
    value_to_yaml(msg.accel_rate_hz, out);
    out << "\n";
  }

  // member: gyro_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_rate_hz: ";
    value_to_yaml(msg.gyro_rate_hz, out);
    out << "\n";
  }

  // member: accel_raw_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_raw_rate_hz: ";
    value_to_yaml(msg.accel_raw_rate_hz, out);
    out << "\n";
  }

  // member: gyro_raw_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_raw_rate_hz: ";
    value_to_yaml(msg.gyro_raw_rate_hz, out);
    out << "\n";
  }

  // member: accel_vibration_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_vibration_metric: ";
    value_to_yaml(msg.accel_vibration_metric, out);
    out << "\n";
  }

  // member: gyro_vibration_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_vibration_metric: ";
    value_to_yaml(msg.gyro_vibration_metric, out);
    out << "\n";
  }

  // member: delta_angle_coning_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_angle_coning_metric: ";
    value_to_yaml(msg.delta_angle_coning_metric, out);
    out << "\n";
  }

  // member: mean_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mean_accel.size() == 0) {
      out << "mean_accel: []\n";
    } else {
      out << "mean_accel:\n";
      for (auto item : msg.mean_accel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mean_gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mean_gyro.size() == 0) {
      out << "mean_gyro: []\n";
    } else {
      out << "mean_gyro:\n";
      for (auto item : msg.mean_gyro) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: var_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.var_accel.size() == 0) {
      out << "var_accel: []\n";
    } else {
      out << "var_accel:\n";
      for (auto item : msg.var_accel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: var_gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.var_gyro.size() == 0) {
      out << "var_gyro: []\n";
    } else {
      out << "var_gyro:\n";
      for (auto item : msg.var_gyro) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_accel: ";
    value_to_yaml(msg.temperature_accel, out);
    out << "\n";
  }

  // member: temperature_gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_gyro: ";
    value_to_yaml(msg.temperature_gyro, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::VehicleImuStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleImuStatus>()
{
  return "px4_msgs::msg::VehicleImuStatus";
}

template<>
inline const char * name<px4_msgs::msg::VehicleImuStatus>()
{
  return "px4_msgs/msg/VehicleImuStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleImuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleImuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleImuStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__TRAITS_HPP_
