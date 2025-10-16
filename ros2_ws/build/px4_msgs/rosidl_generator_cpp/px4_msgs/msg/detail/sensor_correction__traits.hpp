// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__TRAITS_HPP_

#include "px4_msgs/msg/detail/sensor_correction__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SensorCorrection & msg,
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

  // member: gyro_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_temperature.size() == 0) {
      out << "gyro_temperature: []\n";
    } else {
      out << "gyro_temperature:\n";
      for (auto item : msg.gyro_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_0.size() == 0) {
      out << "gyro_offset_0: []\n";
    } else {
      out << "gyro_offset_0:\n";
      for (auto item : msg.gyro_offset_0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_1.size() == 0) {
      out << "gyro_offset_1: []\n";
    } else {
      out << "gyro_offset_1:\n";
      for (auto item : msg.gyro_offset_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_2.size() == 0) {
      out << "gyro_offset_2: []\n";
    } else {
      out << "gyro_offset_2:\n";
      for (auto item : msg.gyro_offset_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_3.size() == 0) {
      out << "gyro_offset_3: []\n";
    } else {
      out << "gyro_offset_3:\n";
      for (auto item : msg.gyro_offset_3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: accel_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_temperature.size() == 0) {
      out << "accel_temperature: []\n";
    } else {
      out << "accel_temperature:\n";
      for (auto item : msg.accel_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_0.size() == 0) {
      out << "accel_offset_0: []\n";
    } else {
      out << "accel_offset_0:\n";
      for (auto item : msg.accel_offset_0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_1.size() == 0) {
      out << "accel_offset_1: []\n";
    } else {
      out << "accel_offset_1:\n";
      for (auto item : msg.accel_offset_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_2.size() == 0) {
      out << "accel_offset_2: []\n";
    } else {
      out << "accel_offset_2:\n";
      for (auto item : msg.accel_offset_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_3.size() == 0) {
      out << "accel_offset_3: []\n";
    } else {
      out << "accel_offset_3:\n";
      for (auto item : msg.accel_offset_3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.baro_device_ids.size() == 0) {
      out << "baro_device_ids: []\n";
    } else {
      out << "baro_device_ids:\n";
      for (auto item : msg.baro_device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.baro_temperature.size() == 0) {
      out << "baro_temperature: []\n";
    } else {
      out << "baro_temperature:\n";
      for (auto item : msg.baro_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_0: ";
    value_to_yaml(msg.baro_offset_0, out);
    out << "\n";
  }

  // member: baro_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_1: ";
    value_to_yaml(msg.baro_offset_1, out);
    out << "\n";
  }

  // member: baro_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_2: ";
    value_to_yaml(msg.baro_offset_2, out);
    out << "\n";
  }

  // member: baro_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_3: ";
    value_to_yaml(msg.baro_offset_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::SensorCorrection & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SensorCorrection>()
{
  return "px4_msgs::msg::SensorCorrection";
}

template<>
inline const char * name<px4_msgs::msg::SensorCorrection>()
{
  return "px4_msgs/msg/SensorCorrection";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorCorrection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorCorrection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorCorrection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__TRAITS_HPP_
