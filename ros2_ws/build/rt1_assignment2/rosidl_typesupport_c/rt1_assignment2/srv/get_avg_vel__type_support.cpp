// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rt1_assignment2:srv/GetAvgVel.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rt1_assignment2/srv/detail/get_avg_vel__struct.h"
#include "rt1_assignment2/srv/detail/get_avg_vel__type_support.h"
#include "rt1_assignment2/srv/detail/get_avg_vel__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAvgVel_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_Request_type_support_ids_t;

static const _GetAvgVel_Request_type_support_ids_t _GetAvgVel_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetAvgVel_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAvgVel_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAvgVel_Request_type_support_symbol_names_t _GetAvgVel_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rt1_assignment2, srv, GetAvgVel_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rt1_assignment2, srv, GetAvgVel_Request)),
  }
};

typedef struct _GetAvgVel_Request_type_support_data_t
{
  void * data[2];
} _GetAvgVel_Request_type_support_data_t;

static _GetAvgVel_Request_type_support_data_t _GetAvgVel_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetAvgVel_Request_message_typesupport_map = {
  2,
  "rt1_assignment2",
  &_GetAvgVel_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetAvgVel_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetAvgVel_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetAvgVel_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rt1_assignment2__srv__GetAvgVel_Request__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel_Request__get_type_description,
  &rt1_assignment2__srv__GetAvgVel_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rt1_assignment2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rt1_assignment2, srv, GetAvgVel_Request)() {
  return &::rt1_assignment2::srv::rosidl_typesupport_c::GetAvgVel_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__struct.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__type_support.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAvgVel_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_Response_type_support_ids_t;

static const _GetAvgVel_Response_type_support_ids_t _GetAvgVel_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetAvgVel_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAvgVel_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAvgVel_Response_type_support_symbol_names_t _GetAvgVel_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rt1_assignment2, srv, GetAvgVel_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rt1_assignment2, srv, GetAvgVel_Response)),
  }
};

typedef struct _GetAvgVel_Response_type_support_data_t
{
  void * data[2];
} _GetAvgVel_Response_type_support_data_t;

static _GetAvgVel_Response_type_support_data_t _GetAvgVel_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetAvgVel_Response_message_typesupport_map = {
  2,
  "rt1_assignment2",
  &_GetAvgVel_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetAvgVel_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetAvgVel_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetAvgVel_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rt1_assignment2__srv__GetAvgVel_Response__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel_Response__get_type_description,
  &rt1_assignment2__srv__GetAvgVel_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rt1_assignment2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rt1_assignment2, srv, GetAvgVel_Response)() {
  return &::rt1_assignment2::srv::rosidl_typesupport_c::GetAvgVel_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__struct.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__type_support.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAvgVel_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_Event_type_support_ids_t;

static const _GetAvgVel_Event_type_support_ids_t _GetAvgVel_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetAvgVel_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAvgVel_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAvgVel_Event_type_support_symbol_names_t _GetAvgVel_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rt1_assignment2, srv, GetAvgVel_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rt1_assignment2, srv, GetAvgVel_Event)),
  }
};

typedef struct _GetAvgVel_Event_type_support_data_t
{
  void * data[2];
} _GetAvgVel_Event_type_support_data_t;

static _GetAvgVel_Event_type_support_data_t _GetAvgVel_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetAvgVel_Event_message_typesupport_map = {
  2,
  "rt1_assignment2",
  &_GetAvgVel_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetAvgVel_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetAvgVel_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetAvgVel_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rt1_assignment2__srv__GetAvgVel_Event__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel_Event__get_type_description,
  &rt1_assignment2__srv__GetAvgVel_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rt1_assignment2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rt1_assignment2, srv, GetAvgVel_Event)() {
  return &::rt1_assignment2::srv::rosidl_typesupport_c::GetAvgVel_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetAvgVel_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_type_support_ids_t;

static const _GetAvgVel_type_support_ids_t _GetAvgVel_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetAvgVel_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAvgVel_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAvgVel_type_support_symbol_names_t _GetAvgVel_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rt1_assignment2, srv, GetAvgVel)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rt1_assignment2, srv, GetAvgVel)),
  }
};

typedef struct _GetAvgVel_type_support_data_t
{
  void * data[2];
} _GetAvgVel_type_support_data_t;

static _GetAvgVel_type_support_data_t _GetAvgVel_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetAvgVel_service_typesupport_map = {
  2,
  "rt1_assignment2",
  &_GetAvgVel_service_typesupport_ids.typesupport_identifier[0],
  &_GetAvgVel_service_typesupport_symbol_names.symbol_name[0],
  &_GetAvgVel_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetAvgVel_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetAvgVel_Request_message_type_support_handle,
  &GetAvgVel_Response_message_type_support_handle,
  &GetAvgVel_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rt1_assignment2,
    srv,
    GetAvgVel
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rt1_assignment2,
    srv,
    GetAvgVel
  ),
  &rt1_assignment2__srv__GetAvgVel__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel__get_type_description,
  &rt1_assignment2__srv__GetAvgVel__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rt1_assignment2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rt1_assignment2, srv, GetAvgVel)() {
  return &::rt1_assignment2::srv::rosidl_typesupport_c::GetAvgVel_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
