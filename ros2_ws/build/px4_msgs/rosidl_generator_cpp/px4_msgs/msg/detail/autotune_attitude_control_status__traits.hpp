// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/autotune_attitude_control_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::AutotuneAttitudeControlStatus & msg,
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

  // member: coeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeff.size() == 0) {
      out << "coeff: []\n";
    } else {
      out << "coeff:\n";
      for (auto item : msg.coeff) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coeff_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeff_var.size() == 0) {
      out << "coeff_var: []\n";
    } else {
      out << "coeff_var:\n";
      for (auto item : msg.coeff_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fitness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fitness: ";
    value_to_yaml(msg.fitness, out);
    out << "\n";
  }

  // member: innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov: ";
    value_to_yaml(msg.innov, out);
    out << "\n";
  }

  // member: dt_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_model: ";
    value_to_yaml(msg.dt_model, out);
    out << "\n";
  }

  // member: kc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kc: ";
    value_to_yaml(msg.kc, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: kff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kff: ";
    value_to_yaml(msg.kff, out);
    out << "\n";
  }

  // member: att_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "att_p: ";
    value_to_yaml(msg.att_p, out);
    out << "\n";
  }

  // member: rate_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rate_sp.size() == 0) {
      out << "rate_sp: []\n";
    } else {
      out << "rate_sp:\n";
      for (auto item : msg.rate_sp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: u_filt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_filt: ";
    value_to_yaml(msg.u_filt, out);
    out << "\n";
  }

  // member: y_filt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_filt: ";
    value_to_yaml(msg.y_filt, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::AutotuneAttitudeControlStatus>()
{
  return "px4_msgs::msg::AutotuneAttitudeControlStatus";
}

template<>
inline const char * name<px4_msgs::msg::AutotuneAttitudeControlStatus>()
{
  return "px4_msgs/msg/AutotuneAttitudeControlStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::AutotuneAttitudeControlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::AutotuneAttitudeControlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::AutotuneAttitudeControlStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__TRAITS_HPP_
