// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rt1_assignment2:srv/SetThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/srv/set_threshold.hpp"


#ifndef RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_
#define RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rt1_assignment2/srv/detail/set_threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rt1_assignment2
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Request_input
{
public:
  Init_SetThreshold_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rt1_assignment2::srv::SetThreshold_Request input(::rt1_assignment2::srv::SetThreshold_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt1_assignment2::srv::SetThreshold_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_assignment2::srv::SetThreshold_Request>()
{
  return rt1_assignment2::srv::builder::Init_SetThreshold_Request_input();
}

}  // namespace rt1_assignment2


namespace rt1_assignment2
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Response_success
{
public:
  Init_SetThreshold_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rt1_assignment2::srv::SetThreshold_Response success(::rt1_assignment2::srv::SetThreshold_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt1_assignment2::srv::SetThreshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_assignment2::srv::SetThreshold_Response>()
{
  return rt1_assignment2::srv::builder::Init_SetThreshold_Response_success();
}

}  // namespace rt1_assignment2


namespace rt1_assignment2
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Event_response
{
public:
  explicit Init_SetThreshold_Event_response(::rt1_assignment2::srv::SetThreshold_Event & msg)
  : msg_(msg)
  {}
  ::rt1_assignment2::srv::SetThreshold_Event response(::rt1_assignment2::srv::SetThreshold_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt1_assignment2::srv::SetThreshold_Event msg_;
};

class Init_SetThreshold_Event_request
{
public:
  explicit Init_SetThreshold_Event_request(::rt1_assignment2::srv::SetThreshold_Event & msg)
  : msg_(msg)
  {}
  Init_SetThreshold_Event_response request(::rt1_assignment2::srv::SetThreshold_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetThreshold_Event_response(msg_);
  }

private:
  ::rt1_assignment2::srv::SetThreshold_Event msg_;
};

class Init_SetThreshold_Event_info
{
public:
  Init_SetThreshold_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetThreshold_Event_request info(::rt1_assignment2::srv::SetThreshold_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetThreshold_Event_request(msg_);
  }

private:
  ::rt1_assignment2::srv::SetThreshold_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_assignment2::srv::SetThreshold_Event>()
{
  return rt1_assignment2::srv::builder::Init_SetThreshold_Event_info();
}

}  // namespace rt1_assignment2

#endif  // RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_
