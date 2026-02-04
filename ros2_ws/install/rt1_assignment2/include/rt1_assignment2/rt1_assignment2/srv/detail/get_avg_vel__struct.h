// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rt1_assignment2:srv/GetAvgVel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/srv/get_avg_vel.h"


#ifndef RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__STRUCT_H_
#define RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAvgVel in the package rt1_assignment2.
typedef struct rt1_assignment2__srv__GetAvgVel_Request
{
  uint8_t structure_needs_at_least_one_member;
} rt1_assignment2__srv__GetAvgVel_Request;

// Struct for a sequence of rt1_assignment2__srv__GetAvgVel_Request.
typedef struct rt1_assignment2__srv__GetAvgVel_Request__Sequence
{
  rt1_assignment2__srv__GetAvgVel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rt1_assignment2__srv__GetAvgVel_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetAvgVel in the package rt1_assignment2.
typedef struct rt1_assignment2__srv__GetAvgVel_Response
{
  float avg_linear;
  float avg_angular;
} rt1_assignment2__srv__GetAvgVel_Response;

// Struct for a sequence of rt1_assignment2__srv__GetAvgVel_Response.
typedef struct rt1_assignment2__srv__GetAvgVel_Response__Sequence
{
  rt1_assignment2__srv__GetAvgVel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rt1_assignment2__srv__GetAvgVel_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rt1_assignment2__srv__GetAvgVel_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rt1_assignment2__srv__GetAvgVel_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetAvgVel in the package rt1_assignment2.
typedef struct rt1_assignment2__srv__GetAvgVel_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rt1_assignment2__srv__GetAvgVel_Request__Sequence request;
  rt1_assignment2__srv__GetAvgVel_Response__Sequence response;
} rt1_assignment2__srv__GetAvgVel_Event;

// Struct for a sequence of rt1_assignment2__srv__GetAvgVel_Event.
typedef struct rt1_assignment2__srv__GetAvgVel_Event__Sequence
{
  rt1_assignment2__srv__GetAvgVel_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rt1_assignment2__srv__GetAvgVel_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RT1_ASSIGNMENT2__SRV__DETAIL__GET_AVG_VEL__STRUCT_H_
