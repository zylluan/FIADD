// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msg:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef MY_MSG__MSG__DETAIL__POSITION__BUILDER_HPP_
#define MY_MSG__MSG__DETAIL__POSITION__BUILDER_HPP_

#include "my_msg/msg/detail/position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_msg
{

namespace msg
{

namespace builder
{

class Init_Position_z
{
public:
  explicit Init_Position_z(::my_msg::msg::Position & msg)
  : msg_(msg)
  {}
  ::my_msg::msg::Position z(::my_msg::msg::Position::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msg::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::my_msg::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_z y(::my_msg::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_z(msg_);
  }

private:
  ::my_msg::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::my_msg::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::my_msg::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msg::msg::Position>()
{
  return my_msg::msg::builder::Init_Position_x();
}

}  // namespace my_msg

#endif  // MY_MSG__MSG__DETAIL__POSITION__BUILDER_HPP_
