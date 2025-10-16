// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MessageFormatRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__TRAITS_HPP_

#include "px4_msgs/msg/detail/message_format_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::MessageFormatRequest & msg,
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

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }

  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topic_name.size() == 0) {
      out << "topic_name: []\n";
    } else {
      out << "topic_name:\n";
      for (auto item : msg.topic_name) {
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

inline std::string to_yaml(const px4_msgs::msg::MessageFormatRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::MessageFormatRequest>()
{
  return "px4_msgs::msg::MessageFormatRequest";
}

template<>
inline const char * name<px4_msgs::msg::MessageFormatRequest>()
{
  return "px4_msgs/msg/MessageFormatRequest";
}

template<>
struct has_fixed_size<px4_msgs::msg::MessageFormatRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MessageFormatRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MessageFormatRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__TRAITS_HPP_
