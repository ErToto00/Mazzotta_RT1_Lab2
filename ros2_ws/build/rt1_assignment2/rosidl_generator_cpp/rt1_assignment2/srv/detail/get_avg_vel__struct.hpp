// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rt1_assignment2:srv/GetAvgVel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/srv/get_avg_vel.hpp"


#ifndef RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__STRUCT_HPP_
#define RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rt1_assignment2__srv__GetAvgVel_Request __attribute__((deprecated))
#else
# define DEPRECATED__rt1_assignment2__srv__GetAvgVel_Request __declspec(deprecated)
#endif

namespace rt1_assignment2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvgVel_Request_
{
  using Type = GetAvgVel_Request_<ContainerAllocator>;

  explicit GetAvgVel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetAvgVel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rt1_assignment2__srv__GetAvgVel_Request
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rt1_assignment2__srv__GetAvgVel_Request
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvgVel_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvgVel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvgVel_Request_

// alias to use template instance with default allocator
using GetAvgVel_Request =
  rt1_assignment2::srv::GetAvgVel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rt1_assignment2


#ifndef _WIN32
# define DEPRECATED__rt1_assignment2__srv__GetAvgVel_Response __attribute__((deprecated))
#else
# define DEPRECATED__rt1_assignment2__srv__GetAvgVel_Response __declspec(deprecated)
#endif

namespace rt1_assignment2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvgVel_Response_
{
  using Type = GetAvgVel_Response_<ContainerAllocator>;

  explicit GetAvgVel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_linear = 0.0f;
      this->avg_angular = 0.0f;
    }
  }

  explicit GetAvgVel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_linear = 0.0f;
      this->avg_angular = 0.0f;
    }
  }

  // field types and members
  using _avg_linear_type =
    float;
  _avg_linear_type avg_linear;
  using _avg_angular_type =
    float;
  _avg_angular_type avg_angular;

  // setters for named parameter idiom
  Type & set__avg_linear(
    const float & _arg)
  {
    this->avg_linear = _arg;
    return *this;
  }
  Type & set__avg_angular(
    const float & _arg)
  {
    this->avg_angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rt1_assignment2__srv__GetAvgVel_Response
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rt1_assignment2__srv__GetAvgVel_Response
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvgVel_Response_ & other) const
  {
    if (this->avg_linear != other.avg_linear) {
      return false;
    }
    if (this->avg_angular != other.avg_angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvgVel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvgVel_Response_

// alias to use template instance with default allocator
using GetAvgVel_Response =
  rt1_assignment2::srv::GetAvgVel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rt1_assignment2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rt1_assignment2__srv__GetAvgVel_Event __attribute__((deprecated))
#else
# define DEPRECATED__rt1_assignment2__srv__GetAvgVel_Event __declspec(deprecated)
#endif

namespace rt1_assignment2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvgVel_Event_
{
  using Type = GetAvgVel_Event_<ContainerAllocator>;

  explicit GetAvgVel_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetAvgVel_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rt1_assignment2::srv::GetAvgVel_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rt1_assignment2::srv::GetAvgVel_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rt1_assignment2__srv__GetAvgVel_Event
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rt1_assignment2__srv__GetAvgVel_Event
    std::shared_ptr<rt1_assignment2::srv::GetAvgVel_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvgVel_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvgVel_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvgVel_Event_

// alias to use template instance with default allocator
using GetAvgVel_Event =
  rt1_assignment2::srv::GetAvgVel_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rt1_assignment2

namespace rt1_assignment2
{

namespace srv
{

struct GetAvgVel
{
  using Request = rt1_assignment2::srv::GetAvgVel_Request;
  using Response = rt1_assignment2::srv::GetAvgVel_Response;
  using Event = rt1_assignment2::srv::GetAvgVel_Event;
};

}  // namespace srv

}  // namespace rt1_assignment2

#endif  // RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__STRUCT_HPP_
