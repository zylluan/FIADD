// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/sensors_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SensorsStatus & msg,
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

  // member: device_id_primary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id_primary: ";
    value_to_yaml(msg.device_id_primary, out);
    out << "\n";
  }

  // member: device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_ids.size() == 0) {
      out << "device_ids: []\n";
    } else {
      out << "device_ids:\n";
      for (auto item : msg.device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: inconsistency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inconsistency.size() == 0) {
      out << "inconsistency: []\n";
    } else {
      out << "inconsistency:\n";
      for (auto item : msg.inconsistency) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.healthy.size() == 0) {
      out << "healthy: []\n";
    } else {
      out << "healthy:\n";
      for (auto item : msg.healthy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.priority.size() == 0) {
      out << "priority: []\n";
    } else {
      out << "priority:\n";
      for (auto item : msg.priority) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabled.size() == 0) {
      out << "enabled: []\n";
    } else {
      out << "enabled:\n";
      for (auto item : msg.enabled) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: external
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.external.size() == 0) {
      out << "external: []\n";
    } else {
      out << "external:\n";
      for (auto item : msg.external) {
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

inline std::string to_yaml(const px4_msgs::msg::SensorsStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SensorsStatus>()
{
  return "px4_msgs::msg::SensorsStatus";
}

template<>
inline const char * name<px4_msgs::msg::SensorsStatus>()
{
  return "px4_msgs/msg/SensorsStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__TRAITS_HPP_
