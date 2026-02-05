// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rt1_assignment2:msg/Info.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rt1_assignment2/msg/detail/info__rosidl_typesupport_introspection_c.h"
#include "rt1_assignment2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rt1_assignment2/msg/detail/info__functions.h"
#include "rt1_assignment2/msg/detail/info__struct.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rt1_assignment2__msg__Info__init(message_memory);
}

void rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_fini_function(void * message_memory)
{
  rt1_assignment2__msg__Info__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_member_array[3] = {
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_assignment2__msg__Info, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_assignment2__msg__Info, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_assignment2__msg__Info, threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_members = {
  "rt1_assignment2__msg",  // message namespace
  "Info",  // message name
  3,  // number of fields
  sizeof(rt1_assignment2__msg__Info),
  false,  // has_any_key_member_
  rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_member_array,  // message members
  rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_init_function,  // function to initialize message memory (memory has to be allocated)
  rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle = {
  0,
  &rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_members,
  get_message_typesupport_handle_function,
  &rt1_assignment2__msg__Info__get_type_hash,
  &rt1_assignment2__msg__Info__get_type_description,
  &rt1_assignment2__msg__Info__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rt1_assignment2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rt1_assignment2, msg, Info)() {
  if (!rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle.typesupport_identifier) {
    rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rt1_assignment2__msg__Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
