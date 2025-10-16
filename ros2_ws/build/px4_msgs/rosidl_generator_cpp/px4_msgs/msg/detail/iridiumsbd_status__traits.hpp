// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/iridiumsbd_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::IridiumsbdStatus & msg,
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

  // member: last_heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_heartbeat: ";
    value_to_yaml(msg.last_heartbeat, out);
    out << "\n";
  }

  // member: tx_buf_write_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_buf_write_index: ";
    value_to_yaml(msg.tx_buf_write_index, out);
    out << "\n";
  }

  // member: rx_buf_read_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_buf_read_index: ";
    value_to_yaml(msg.rx_buf_read_index, out);
    out << "\n";
  }

  // member: rx_buf_end_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_buf_end_index: ";
    value_to_yaml(msg.rx_buf_end_index, out);
    out << "\n";
  }

  // member: failed_sbd_sessions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failed_sbd_sessions: ";
    value_to_yaml(msg.failed_sbd_sessions, out);
    out << "\n";
  }

  // member: successful_sbd_sessions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "successful_sbd_sessions: ";
    value_to_yaml(msg.successful_sbd_sessions, out);
    out << "\n";
  }

  // member: num_tx_buf_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_tx_buf_reset: ";
    value_to_yaml(msg.num_tx_buf_reset, out);
    out << "\n";
  }

  // member: signal_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_quality: ";
    value_to_yaml(msg.signal_quality, out);
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

  // member: ring_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ring_pending: ";
    value_to_yaml(msg.ring_pending, out);
    out << "\n";
  }

  // member: tx_buf_write_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_buf_write_pending: ";
    value_to_yaml(msg.tx_buf_write_pending, out);
    out << "\n";
  }

  // member: tx_session_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_session_pending: ";
    value_to_yaml(msg.tx_session_pending, out);
    out << "\n";
  }

  // member: rx_read_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_read_pending: ";
    value_to_yaml(msg.rx_read_pending, out);
    out << "\n";
  }

  // member: rx_session_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_session_pending: ";
    value_to_yaml(msg.rx_session_pending, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::IridiumsbdStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::IridiumsbdStatus>()
{
  return "px4_msgs::msg::IridiumsbdStatus";
}

template<>
inline const char * name<px4_msgs::msg::IridiumsbdStatus>()
{
  return "px4_msgs/msg/IridiumsbdStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::IridiumsbdStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::IridiumsbdStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::IridiumsbdStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__TRAITS_HPP_
