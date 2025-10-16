// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/battery_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::BatteryStatus & msg,
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

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    value_to_yaml(msg.connected, out);
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

  // member: voltage_filtered_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_filtered_v: ";
    value_to_yaml(msg.voltage_filtered_v, out);
    out << "\n";
  }

  // member: current_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_a: ";
    value_to_yaml(msg.current_a, out);
    out << "\n";
  }

  // member: current_filtered_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_filtered_a: ";
    value_to_yaml(msg.current_filtered_a, out);
    out << "\n";
  }

  // member: current_average_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_average_a: ";
    value_to_yaml(msg.current_average_a, out);
    out << "\n";
  }

  // member: discharged_mah
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharged_mah: ";
    value_to_yaml(msg.discharged_mah, out);
    out << "\n";
  }

  // member: remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining: ";
    value_to_yaml(msg.remaining, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    value_to_yaml(msg.scale, out);
    out << "\n";
  }

  // member: time_remaining_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_remaining_s: ";
    value_to_yaml(msg.time_remaining_s, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: cell_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_count: ";
    value_to_yaml(msg.cell_count, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capacity: ";
    value_to_yaml(msg.capacity, out);
    out << "\n";
  }

  // member: cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_count: ";
    value_to_yaml(msg.cycle_count, out);
    out << "\n";
  }

  // member: average_time_to_empty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_time_to_empty: ";
    value_to_yaml(msg.average_time_to_empty, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: manufacture_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manufacture_date: ";
    value_to_yaml(msg.manufacture_date, out);
    out << "\n";
  }

  // member: state_of_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_health: ";
    value_to_yaml(msg.state_of_health, out);
    out << "\n";
  }

  // member: max_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_error: ";
    value_to_yaml(msg.max_error, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: interface_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface_error: ";
    value_to_yaml(msg.interface_error, out);
    out << "\n";
  }

  // member: voltage_cell_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.voltage_cell_v.size() == 0) {
      out << "voltage_cell_v: []\n";
    } else {
      out << "voltage_cell_v:\n";
      for (auto item : msg.voltage_cell_v) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_cell_voltage_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_cell_voltage_delta: ";
    value_to_yaml(msg.max_cell_voltage_delta, out);
    out << "\n";
  }

  // member: is_powering_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_powering_off: ";
    value_to_yaml(msg.is_powering_off, out);
    out << "\n";
  }

  // member: is_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_required: ";
    value_to_yaml(msg.is_required, out);
    out << "\n";
  }

  // member: faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "faults: ";
    value_to_yaml(msg.faults, out);
    out << "\n";
  }

  // member: custom_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_faults: ";
    value_to_yaml(msg.custom_faults, out);
    out << "\n";
  }

  // member: warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning: ";
    value_to_yaml(msg.warning, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: average_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_power: ";
    value_to_yaml(msg.average_power, out);
    out << "\n";
  }

  // member: available_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available_energy: ";
    value_to_yaml(msg.available_energy, out);
    out << "\n";
  }

  // member: full_charge_capacity_wh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_charge_capacity_wh: ";
    value_to_yaml(msg.full_charge_capacity_wh, out);
    out << "\n";
  }

  // member: remaining_capacity_wh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_capacity_wh: ";
    value_to_yaml(msg.remaining_capacity_wh, out);
    out << "\n";
  }

  // member: design_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "design_capacity: ";
    value_to_yaml(msg.design_capacity, out);
    out << "\n";
  }

  // member: average_time_to_full
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_time_to_full: ";
    value_to_yaml(msg.average_time_to_full, out);
    out << "\n";
  }

  // member: over_discharge_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_discharge_count: ";
    value_to_yaml(msg.over_discharge_count, out);
    out << "\n";
  }

  // member: nominal_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_voltage: ";
    value_to_yaml(msg.nominal_voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::BatteryStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::BatteryStatus>()
{
  return "px4_msgs::msg::BatteryStatus";
}

template<>
inline const char * name<px4_msgs::msg::BatteryStatus>()
{
  return "px4_msgs/msg/BatteryStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::BatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::BatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::BatteryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__TRAITS_HPP_
