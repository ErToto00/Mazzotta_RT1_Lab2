// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rt1_assignment2:srv/GetAvgVel.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rt1_assignment2/srv/detail/get_avg_vel__functions.h"
#include "rt1_assignment2/srv/detail/get_avg_vel__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetAvgVel_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_Request_type_support_ids_t;

static const _GetAvgVel_Request_type_support_ids_t _GetAvgVel_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rt1_assignment2, srv, GetAvgVel_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rt1_assignment2, srv, GetAvgVel_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rt1_assignment2__srv__GetAvgVel_Request__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel_Request__get_type_description,
  &rt1_assignment2__srv__GetAvgVel_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rt1_assignment2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Request>()
{
  return &::rt1_assignment2::srv::rosidl_typesupport_cpp::GetAvgVel_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rt1_assignment2, srv, GetAvgVel_Request)() {
  return get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__functions.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetAvgVel_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_Response_type_support_ids_t;

static const _GetAvgVel_Response_type_support_ids_t _GetAvgVel_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rt1_assignment2, srv, GetAvgVel_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rt1_assignment2, srv, GetAvgVel_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rt1_assignment2__srv__GetAvgVel_Response__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel_Response__get_type_description,
  &rt1_assignment2__srv__GetAvgVel_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rt1_assignment2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Response>()
{
  return &::rt1_assignment2::srv::rosidl_typesupport_cpp::GetAvgVel_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rt1_assignment2, srv, GetAvgVel_Response)() {
  return get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__functions.h"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetAvgVel_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_Event_type_support_ids_t;

static const _GetAvgVel_Event_type_support_ids_t _GetAvgVel_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rt1_assignment2, srv, GetAvgVel_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rt1_assignment2, srv, GetAvgVel_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rt1_assignment2__srv__GetAvgVel_Event__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel_Event__get_type_description,
  &rt1_assignment2__srv__GetAvgVel_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rt1_assignment2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Event>()
{
  return &::rt1_assignment2::srv::rosidl_typesupport_cpp::GetAvgVel_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rt1_assignment2, srv, GetAvgVel_Event)() {
  return get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rt1_assignment2/srv/detail/get_avg_vel__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rt1_assignment2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetAvgVel_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvgVel_type_support_ids_t;

static const _GetAvgVel_type_support_ids_t _GetAvgVel_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rt1_assignment2, srv, GetAvgVel)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rt1_assignment2, srv, GetAvgVel)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvgVel_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rt1_assignment2::srv::GetAvgVel_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rt1_assignment2::srv::GetAvgVel>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rt1_assignment2::srv::GetAvgVel>,
  &rt1_assignment2__srv__GetAvgVel__get_type_hash,
  &rt1_assignment2__srv__GetAvgVel__get_type_description,
  &rt1_assignment2__srv__GetAvgVel__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rt1_assignment2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rt1_assignment2::srv::GetAvgVel>()
{
  return &::rt1_assignment2::srv::rosidl_typesupport_cpp::GetAvgVel_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, rt1_assignment2, srv, GetAvgVel)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<rt1_assignment2::srv::GetAvgVel>();
}

#ifdef __cplusplus
}
#endif
