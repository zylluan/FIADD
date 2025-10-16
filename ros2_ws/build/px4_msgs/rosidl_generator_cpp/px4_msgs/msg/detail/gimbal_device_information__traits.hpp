// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__TRAITS_HPP_

#include "px4_msgs/msg/detail/gimbal_device_information__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::GimbalDeviceInformation & msg,
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

  // member: vendor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vendor_name.size() == 0) {
      out << "vendor_name: []\n";
    } else {
      out << "vendor_name:\n";
      for (auto item : msg.vendor_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.model_name.size() == 0) {
      out << "model_name: []\n";
    } else {
      out << "model_name:\n";
      for (auto item : msg.model_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: custom_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.custom_name.size() == 0) {
      out << "custom_name: []\n";
    } else {
      out << "custom_name:\n";
      for (auto item : msg.custom_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_version: ";
    value_to_yaml(msg.hardware_version, out);
    out << "\n";
  }

  // member: uid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uid: ";
    value_to_yaml(msg.uid, out);
    out << "\n";
  }

  // member: cap_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cap_flags: ";
    value_to_yaml(msg.cap_flags, out);
    out << "\n";
  }

  // member: custom_cap_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_cap_flags: ";
    value_to_yaml(msg.custom_cap_flags, out);
    out << "\n";
  }

  // member: roll_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_min: ";
    value_to_yaml(msg.roll_min, out);
    out << "\n";
  }

  // member: roll_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_max: ";
    value_to_yaml(msg.roll_max, out);
    out << "\n";
  }

  // member: pitch_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_min: ";
    value_to_yaml(msg.pitch_min, out);
    out << "\n";
  }

  // member: pitch_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_max: ";
    value_to_yaml(msg.pitch_max, out);
    out << "\n";
  }

  // member: yaw_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_min: ";
    value_to_yaml(msg.yaw_min, out);
    out << "\n";
  }

  // member: yaw_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_max: ";
    value_to_yaml(msg.yaw_max, out);
    out << "\n";
  }

  // member: gimbal_device_compid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_device_compid: ";
    value_to_yaml(msg.gimbal_device_compid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::GimbalDeviceInformation & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalDeviceInformation>()
{
  return "px4_msgs::msg::GimbalDeviceInformation";
}

template<>
inline const char * name<px4_msgs::msg::GimbalDeviceInformation>()
{
  return "px4_msgs/msg/GimbalDeviceInformation";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalDeviceInformation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalDeviceInformation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalDeviceInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__TRAITS_HPP_
