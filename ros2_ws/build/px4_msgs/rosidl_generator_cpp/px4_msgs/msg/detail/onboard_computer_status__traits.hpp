// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/onboard_computer_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::OnboardComputerStatus & msg,
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

  // member: uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime: ";
    value_to_yaml(msg.uptime, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: cpu_cores
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpu_cores.size() == 0) {
      out << "cpu_cores: []\n";
    } else {
      out << "cpu_cores:\n";
      for (auto item : msg.cpu_cores) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cpu_combined
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpu_combined.size() == 0) {
      out << "cpu_combined: []\n";
    } else {
      out << "cpu_combined:\n";
      for (auto item : msg.cpu_combined) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gpu_cores
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gpu_cores.size() == 0) {
      out << "gpu_cores: []\n";
    } else {
      out << "gpu_cores:\n";
      for (auto item : msg.gpu_cores) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gpu_combined
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gpu_combined.size() == 0) {
      out << "gpu_combined: []\n";
    } else {
      out << "gpu_combined:\n";
      for (auto item : msg.gpu_combined) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature_board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_board: ";
    value_to_yaml(msg.temperature_board, out);
    out << "\n";
  }

  // member: temperature_core
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperature_core.size() == 0) {
      out << "temperature_core: []\n";
    } else {
      out << "temperature_core:\n";
      for (auto item : msg.temperature_core) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fan_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fan_speed.size() == 0) {
      out << "fan_speed: []\n";
    } else {
      out << "fan_speed:\n";
      for (auto item : msg.fan_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ram_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_usage: ";
    value_to_yaml(msg.ram_usage, out);
    out << "\n";
  }

  // member: ram_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_total: ";
    value_to_yaml(msg.ram_total, out);
    out << "\n";
  }

  // member: storage_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.storage_type.size() == 0) {
      out << "storage_type: []\n";
    } else {
      out << "storage_type:\n";
      for (auto item : msg.storage_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: storage_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.storage_usage.size() == 0) {
      out << "storage_usage: []\n";
    } else {
      out << "storage_usage:\n";
      for (auto item : msg.storage_usage) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: storage_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.storage_total.size() == 0) {
      out << "storage_total: []\n";
    } else {
      out << "storage_total:\n";
      for (auto item : msg.storage_total) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_type.size() == 0) {
      out << "link_type: []\n";
    } else {
      out << "link_type:\n";
      for (auto item : msg.link_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_tx_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_tx_rate.size() == 0) {
      out << "link_tx_rate: []\n";
    } else {
      out << "link_tx_rate:\n";
      for (auto item : msg.link_tx_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_rx_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_rx_rate.size() == 0) {
      out << "link_rx_rate: []\n";
    } else {
      out << "link_rx_rate:\n";
      for (auto item : msg.link_rx_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_tx_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_tx_max.size() == 0) {
      out << "link_tx_max: []\n";
    } else {
      out << "link_tx_max:\n";
      for (auto item : msg.link_tx_max) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_rx_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_rx_max.size() == 0) {
      out << "link_rx_max: []\n";
    } else {
      out << "link_rx_max:\n";
      for (auto item : msg.link_rx_max) {
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

inline std::string to_yaml(const px4_msgs::msg::OnboardComputerStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::OnboardComputerStatus>()
{
  return "px4_msgs::msg::OnboardComputerStatus";
}

template<>
inline const char * name<px4_msgs::msg::OnboardComputerStatus>()
{
  return "px4_msgs/msg/OnboardComputerStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::OnboardComputerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OnboardComputerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OnboardComputerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__TRAITS_HPP_
