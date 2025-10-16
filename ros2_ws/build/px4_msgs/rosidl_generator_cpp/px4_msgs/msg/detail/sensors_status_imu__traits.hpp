// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorsStatusImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__TRAITS_HPP_

#include "px4_msgs/msg/detail/sensors_status_imu__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SensorsStatusImu & msg,
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

  // member: accel_device_id_primary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_device_id_primary: ";
    value_to_yaml(msg.accel_device_id_primary, out);
    out << "\n";
  }

  // member: accel_device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_device_ids.size() == 0) {
      out << "accel_device_ids: []\n";
    } else {
      out << "accel_device_ids:\n";
      for (auto item : msg.accel_device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_inconsistency_m_s_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_inconsistency_m_s_s.size() == 0) {
      out << "accel_inconsistency_m_s_s: []\n";
    } else {
      out << "accel_inconsistency_m_s_s:\n";
      for (auto item : msg.accel_inconsistency_m_s_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_healthy.size() == 0) {
      out << "accel_healthy: []\n";
    } else {
      out << "accel_healthy:\n";
      for (auto item : msg.accel_healthy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_priority.size() == 0) {
      out << "accel_priority: []\n";
    } else {
      out << "accel_priority:\n";
      for (auto item : msg.accel_priority) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_device_id_primary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_device_id_primary: ";
    value_to_yaml(msg.gyro_device_id_primary, out);
    out << "\n";
  }

  // member: gyro_device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_device_ids.size() == 0) {
      out << "gyro_device_ids: []\n";
    } else {
      out << "gyro_device_ids:\n";
      for (auto item : msg.gyro_device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_inconsistency_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_inconsistency_rad_s.size() == 0) {
      out << "gyro_inconsistency_rad_s: []\n";
    } else {
      out << "gyro_inconsistency_rad_s:\n";
      for (auto item : msg.gyro_inconsistency_rad_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_healthy.size() == 0) {
      out << "gyro_healthy: []\n";
    } else {
      out << "gyro_healthy:\n";
      for (auto item : msg.gyro_healthy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_priority.size() == 0) {
      out << "gyro_priority: []\n";
    } else {
      out << "gyro_priority:\n";
      for (auto item : msg.gyro_priority) {
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

inline std::string to_yaml(const px4_msgs::msg::SensorsStatusImu & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SensorsStatusImu>()
{
  return "px4_msgs::msg::SensorsStatusImu";
}

template<>
inline const char * name<px4_msgs::msg::SensorsStatusImu>()
{
  return "px4_msgs/msg/SensorsStatusImu";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorsStatusImu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorsStatusImu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorsStatusImu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__TRAITS_HPP_
