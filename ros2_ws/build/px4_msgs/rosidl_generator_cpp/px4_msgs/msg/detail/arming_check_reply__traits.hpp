// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__TRAITS_HPP_

#include "px4_msgs/msg/detail/arming_check_reply__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'events'
#include "px4_msgs/msg/detail/event__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ArmingCheckReply & msg,
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

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    value_to_yaml(msg.request_id, out);
    out << "\n";
  }

  // member: registration_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "registration_id: ";
    value_to_yaml(msg.registration_id, out);
    out << "\n";
  }

  // member: health_component_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_index: ";
    value_to_yaml(msg.health_component_index, out);
    out << "\n";
  }

  // member: health_component_is_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_is_present: ";
    value_to_yaml(msg.health_component_is_present, out);
    out << "\n";
  }

  // member: health_component_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_warning: ";
    value_to_yaml(msg.health_component_warning, out);
    out << "\n";
  }

  // member: health_component_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_error: ";
    value_to_yaml(msg.health_component_error, out);
    out << "\n";
  }

  // member: can_arm_and_run
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_arm_and_run: ";
    value_to_yaml(msg.can_arm_and_run, out);
    out << "\n";
  }

  // member: num_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_events: ";
    value_to_yaml(msg.num_events, out);
    out << "\n";
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.events.size() == 0) {
      out << "events: []\n";
    } else {
      out << "events:\n";
      for (auto item : msg.events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: mode_req_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_angular_velocity: ";
    value_to_yaml(msg.mode_req_angular_velocity, out);
    out << "\n";
  }

  // member: mode_req_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_attitude: ";
    value_to_yaml(msg.mode_req_attitude, out);
    out << "\n";
  }

  // member: mode_req_local_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_alt: ";
    value_to_yaml(msg.mode_req_local_alt, out);
    out << "\n";
  }

  // member: mode_req_local_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position: ";
    value_to_yaml(msg.mode_req_local_position, out);
    out << "\n";
  }

  // member: mode_req_local_position_relaxed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position_relaxed: ";
    value_to_yaml(msg.mode_req_local_position_relaxed, out);
    out << "\n";
  }

  // member: mode_req_global_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_global_position: ";
    value_to_yaml(msg.mode_req_global_position, out);
    out << "\n";
  }

  // member: mode_req_mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_mission: ";
    value_to_yaml(msg.mode_req_mission, out);
    out << "\n";
  }

  // member: mode_req_home_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_home_position: ";
    value_to_yaml(msg.mode_req_home_position, out);
    out << "\n";
  }

  // member: mode_req_prevent_arming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_prevent_arming: ";
    value_to_yaml(msg.mode_req_prevent_arming, out);
    out << "\n";
  }

  // member: mode_req_manual_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_manual_control: ";
    value_to_yaml(msg.mode_req_manual_control, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ArmingCheckReply & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ArmingCheckReply>()
{
  return "px4_msgs::msg::ArmingCheckReply";
}

template<>
inline const char * name<px4_msgs::msg::ArmingCheckReply>()
{
  return "px4_msgs/msg/ArmingCheckReply";
}

template<>
struct has_fixed_size<px4_msgs::msg::ArmingCheckReply>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::Event>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::ArmingCheckReply>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::Event>::value> {};

template<>
struct is_message<px4_msgs::msg::ArmingCheckReply>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__TRAITS_HPP_
