// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rt1_assignment2:msg/Info.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rt1_assignment2/msg/detail/info__functions.h"
#include "rt1_assignment2/msg/detail/info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rt1_assignment2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Info_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rt1_assignment2::msg::Info(_init);
}

void Info_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rt1_assignment2::msg::Info *>(message_memory);
  typed_message->~Info();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Info_message_member_array[3] = {
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_assignment2::msg::Info, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_assignment2::msg::Info, direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "threshold",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_assignment2::msg::Info, threshold),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Info_message_members = {
  "rt1_assignment2::msg",  // message namespace
  "Info",  // message name
  3,  // number of fields
  sizeof(rt1_assignment2::msg::Info),
  false,  // has_any_key_member_
  Info_message_member_array,  // message members
  Info_init_function,  // function to initialize message memory (memory has to be allocated)
  Info_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Info_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Info_message_members,
  get_message_typesupport_handle_function,
  &rt1_assignment2__msg__Info__get_type_hash,
  &rt1_assignment2__msg__Info__get_type_description,
  &rt1_assignment2__msg__Info__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rt1_assignment2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rt1_assignment2::msg::Info>()
{
  return &::rt1_assignment2::msg::rosidl_typesupport_introspection_cpp::Info_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rt1_assignment2, msg, Info)() {
  return &::rt1_assignment2::msg::rosidl_typesupport_introspection_cpp::Info_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
