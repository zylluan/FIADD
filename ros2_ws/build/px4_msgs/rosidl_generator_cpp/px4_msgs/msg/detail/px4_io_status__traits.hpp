// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Px4IoStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PX4_IO_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PX4_IO_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/px4_io_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::Px4IoStatus & msg,
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

  // member: free_memory_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_memory_bytes: ";
    value_to_yaml(msg.free_memory_bytes, out);
    out << "\n";
  }

  // member: voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_v: ";
    value_to_yaml(msg.voltage_v, out);
    out << "\n";
  }

  // member: rssi_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_v: ";
    value_to_yaml(msg.rssi_v, out);
    out << "\n";
  }

  // member: status_arm_sync
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_arm_sync: ";
    value_to_yaml(msg.status_arm_sync, out);
    out << "\n";
  }

  // member: status_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_failsafe: ";
    value_to_yaml(msg.status_failsafe, out);
    out << "\n";
  }

  // member: status_fmu_initialized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_fmu_initialized: ";
    value_to_yaml(msg.status_fmu_initialized, out);
    out << "\n";
  }

  // member: status_fmu_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_fmu_ok: ";
    value_to_yaml(msg.status_fmu_ok, out);
    out << "\n";
  }

  // member: status_init_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_init_ok: ";
    value_to_yaml(msg.status_init_ok, out);
    out << "\n";
  }

  // member: status_outputs_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_outputs_armed: ";
    value_to_yaml(msg.status_outputs_armed, out);
    out << "\n";
  }

  // member: status_raw_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_raw_pwm: ";
    value_to_yaml(msg.status_raw_pwm, out);
    out << "\n";
  }

  // member: status_rc_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_ok: ";
    value_to_yaml(msg.status_rc_ok, out);
    out << "\n";
  }

  // member: status_rc_dsm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_dsm: ";
    value_to_yaml(msg.status_rc_dsm, out);
    out << "\n";
  }

  // member: status_rc_ppm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_ppm: ";
    value_to_yaml(msg.status_rc_ppm, out);
    out << "\n";
  }

  // member: status_rc_sbus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_sbus: ";
    value_to_yaml(msg.status_rc_sbus, out);
    out << "\n";
  }

  // member: status_rc_st24
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_st24: ";
    value_to_yaml(msg.status_rc_st24, out);
    out << "\n";
  }

  // member: status_rc_sumd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rc_sumd: ";
    value_to_yaml(msg.status_rc_sumd, out);
    out << "\n";
  }

  // member: status_safety_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_safety_off: ";
    value_to_yaml(msg.status_safety_off, out);
    out << "\n";
  }

  // member: alarm_pwm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_pwm_error: ";
    value_to_yaml(msg.alarm_pwm_error, out);
    out << "\n";
  }

  // member: alarm_rc_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_rc_lost: ";
    value_to_yaml(msg.alarm_rc_lost, out);
    out << "\n";
  }

  // member: arming_failsafe_custom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_failsafe_custom: ";
    value_to_yaml(msg.arming_failsafe_custom, out);
    out << "\n";
  }

  // member: arming_fmu_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_fmu_armed: ";
    value_to_yaml(msg.arming_fmu_armed, out);
    out << "\n";
  }

  // member: arming_fmu_prearmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_fmu_prearmed: ";
    value_to_yaml(msg.arming_fmu_prearmed, out);
    out << "\n";
  }

  // member: arming_force_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_force_failsafe: ";
    value_to_yaml(msg.arming_force_failsafe, out);
    out << "\n";
  }

  // member: arming_io_arm_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_io_arm_ok: ";
    value_to_yaml(msg.arming_io_arm_ok, out);
    out << "\n";
  }

  // member: arming_lockdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_lockdown: ";
    value_to_yaml(msg.arming_lockdown, out);
    out << "\n";
  }

  // member: arming_termination_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_termination_failsafe: ";
    value_to_yaml(msg.arming_termination_failsafe, out);
    out << "\n";
  }

  // member: pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm.size() == 0) {
      out << "pwm: []\n";
    } else {
      out << "pwm:\n";
      for (auto item : msg.pwm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm_disarmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_disarmed.size() == 0) {
      out << "pwm_disarmed: []\n";
    } else {
      out << "pwm_disarmed:\n";
      for (auto item : msg.pwm_disarmed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_failsafe.size() == 0) {
      out << "pwm_failsafe: []\n";
    } else {
      out << "pwm_failsafe:\n";
      for (auto item : msg.pwm_failsafe) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm_rate_hz.size() == 0) {
      out << "pwm_rate_hz: []\n";
    } else {
      out << "pwm_rate_hz:\n";
      for (auto item : msg.pwm_rate_hz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: raw_inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_inputs.size() == 0) {
      out << "raw_inputs: []\n";
    } else {
      out << "raw_inputs:\n";
      for (auto item : msg.raw_inputs) {
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

inline std::string to_yaml(const px4_msgs::msg::Px4IoStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::Px4IoStatus>()
{
  return "px4_msgs::msg::Px4IoStatus";
}

template<>
inline const char * name<px4_msgs::msg::Px4IoStatus>()
{
  return "px4_msgs/msg/Px4IoStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::Px4IoStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Px4IoStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Px4IoStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PX4_IO_STATUS__TRAITS_HPP_
