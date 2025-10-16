// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__TRAITS_HPP_

#include "px4_msgs/msg/detail/sensor_gyro_fft__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SensorGyroFft & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: sensor_sample_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_sample_rate_hz: ";
    value_to_yaml(msg.sensor_sample_rate_hz, out);
    out << "\n";
  }

  // member: resolution_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution_hz: ";
    value_to_yaml(msg.resolution_hz, out);
    out << "\n";
  }

  // member: peak_frequencies_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_frequencies_x.size() == 0) {
      out << "peak_frequencies_x: []\n";
    } else {
      out << "peak_frequencies_x:\n";
      for (auto item : msg.peak_frequencies_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_frequencies_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_frequencies_y.size() == 0) {
      out << "peak_frequencies_y: []\n";
    } else {
      out << "peak_frequencies_y:\n";
      for (auto item : msg.peak_frequencies_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_frequencies_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_frequencies_z.size() == 0) {
      out << "peak_frequencies_z: []\n";
    } else {
      out << "peak_frequencies_z:\n";
      for (auto item : msg.peak_frequencies_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_snr_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_snr_x.size() == 0) {
      out << "peak_snr_x: []\n";
    } else {
      out << "peak_snr_x:\n";
      for (auto item : msg.peak_snr_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_snr_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_snr_y.size() == 0) {
      out << "peak_snr_y: []\n";
    } else {
      out << "peak_snr_y:\n";
      for (auto item : msg.peak_snr_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_snr_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_snr_z.size() == 0) {
      out << "peak_snr_z: []\n";
    } else {
      out << "peak_snr_z:\n";
      for (auto item : msg.peak_snr_z) {
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

inline std::string to_yaml(const px4_msgs::msg::SensorGyroFft & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SensorGyroFft>()
{
  return "px4_msgs::msg::SensorGyroFft";
}

template<>
inline const char * name<px4_msgs::msg::SensorGyroFft>()
{
  return "px4_msgs/msg/SensorGyroFft";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorGyroFft>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorGyroFft>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorGyroFft>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__TRAITS_HPP_
