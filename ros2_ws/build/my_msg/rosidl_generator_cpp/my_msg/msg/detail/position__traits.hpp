// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_msg:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef MY_MSG__MSG__DETAIL__POSITION__TRAITS_HPP_
#define MY_MSG__MSG__DETAIL__POSITION__TRAITS_HPP_

#include "my_msg/msg/detail/position__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const my_msg::msg::Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const my_msg::msg::Position & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<my_msg::msg::Position>()
{
  return "my_msg::msg::Position";
}

template<>
inline const char * name<my_msg::msg::Position>()
{
  return "my_msg/msg/Position";
}

template<>
struct has_fixed_size<my_msg::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_msg::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_msg::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MSG__MSG__DETAIL__POSITION__TRAITS_HPP_
