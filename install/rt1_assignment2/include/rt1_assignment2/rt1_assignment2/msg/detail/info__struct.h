// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rt1_assignment2:msg/Info.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/msg/info.h"


#ifndef RT1_ASSIGNMENT2__MSG__DETAIL__INFO__STRUCT_H_
#define RT1_ASSIGNMENT2__MSG__DETAIL__INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Info in the package rt1_assignment2.
typedef struct rt1_assignment2__msg__Info
{
  float distance;
  rosidl_runtime_c__String direction;
  float threshold;
} rt1_assignment2__msg__Info;

// Struct for a sequence of rt1_assignment2__msg__Info.
typedef struct rt1_assignment2__msg__Info__Sequence
{
  rt1_assignment2__msg__Info * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rt1_assignment2__msg__Info__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RT1_ASSIGNMENT2__MSG__DETAIL__INFO__STRUCT_H_
