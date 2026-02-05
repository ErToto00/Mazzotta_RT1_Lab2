// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rt1_assignment2:srv/GetAvgVel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/srv/get_avg_vel.hpp"


#ifndef RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__BUILDER_HPP_
#define RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rt1_assignment2/srv/detail/get_avg_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rt1_assignment2
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_assignment2::srv::GetAvgVel_Request>()
{
  return ::rt1_assignment2::srv::GetAvgVel_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rt1_assignment2


namespace rt1_assignment2
{

namespace srv
{

namespace builder
{

class Init_GetAvgVel_Response_avg_angular
{
public:
  explicit Init_GetAvgVel_Response_avg_angular(::rt1_assignment2::srv::GetAvgVel_Response & msg)
  : msg_(msg)
  {}
  ::rt1_assignment2::srv::GetAvgVel_Response avg_angular(::rt1_assignment2::srv::GetAvgVel_Response::_avg_angular_type arg)
  {
    msg_.avg_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt1_assignment2::srv::GetAvgVel_Response msg_;
};

class Init_GetAvgVel_Response_avg_linear
{
public:
  Init_GetAvgVel_Response_avg_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAvgVel_Response_avg_angular avg_linear(::rt1_assignment2::srv::GetAvgVel_Response::_avg_linear_type arg)
  {
    msg_.avg_linear = std::move(arg);
    return Init_GetAvgVel_Response_avg_angular(msg_);
  }

private:
  ::rt1_assignment2::srv::GetAvgVel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_assignment2::srv::GetAvgVel_Response>()
{
  return rt1_assignment2::srv::builder::Init_GetAvgVel_Response_avg_linear();
}

}  // namespace rt1_assignment2


namespace rt1_assignment2
{

namespace srv
{

namespace builder
{

class Init_GetAvgVel_Event_response
{
public:
  explicit Init_GetAvgVel_Event_response(::rt1_assignment2::srv::GetAvgVel_Event & msg)
  : msg_(msg)
  {}
  ::rt1_assignment2::srv::GetAvgVel_Event response(::rt1_assignment2::srv::GetAvgVel_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt1_assignment2::srv::GetAvgVel_Event msg_;
};

class Init_GetAvgVel_Event_request
{
public:
  explicit Init_GetAvgVel_Event_request(::rt1_assignment2::srv::GetAvgVel_Event & msg)
  : msg_(msg)
  {}
  Init_GetAvgVel_Event_response request(::rt1_assignment2::srv::GetAvgVel_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetAvgVel_Event_response(msg_);
  }

private:
  ::rt1_assignment2::srv::GetAvgVel_Event msg_;
};

class Init_GetAvgVel_Event_info
{
public:
  Init_GetAvgVel_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAvgVel_Event_request info(::rt1_assignment2::srv::GetAvgVel_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetAvgVel_Event_request(msg_);
  }

private:
  ::rt1_assignment2::srv::GetAvgVel_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_assignment2::srv::GetAvgVel_Event>()
{
  return rt1_assignment2::srv::builder::Init_GetAvgVel_Event_info();
}

}  // namespace rt1_assignment2

#endif  // RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__BUILDER_HPP_
