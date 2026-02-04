// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rt1_assignment2:msg/Info.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/msg/info.hpp"


#ifndef RT1_ASSIGNMENT2__MSG__DETAIL__INFO__BUILDER_HPP_
#define RT1_ASSIGNMENT2__MSG__DETAIL__INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rt1_assignment2/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rt1_assignment2
{

namespace msg
{

namespace builder
{

class Init_Info_threshold
{
public:
  explicit Init_Info_threshold(::rt1_assignment2::msg::Info & msg)
  : msg_(msg)
  {}
  ::rt1_assignment2::msg::Info threshold(::rt1_assignment2::msg::Info::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt1_assignment2::msg::Info msg_;
};

class Init_Info_direction
{
public:
  explicit Init_Info_direction(::rt1_assignment2::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_threshold direction(::rt1_assignment2::msg::Info::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Info_threshold(msg_);
  }

private:
  ::rt1_assignment2::msg::Info msg_;
};

class Init_Info_distance
{
public:
  Init_Info_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Info_direction distance(::rt1_assignment2::msg::Info::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Info_direction(msg_);
  }

private:
  ::rt1_assignment2::msg::Info msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_assignment2::msg::Info>()
{
  return rt1_assignment2::msg::builder::Init_Info_distance();
}

}  // namespace rt1_assignment2

#endif  // RT1_ASSIGNMENT2__MSG__DETAIL__INFO__BUILDER_HPP_
