// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rt1_assignment2:srv/GetAvgVel.idl
// generated code does not contain a copyright notice

#include "rt1_assignment2/srv/detail/get_avg_vel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__GetAvgVel__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x03, 0x2c, 0x94, 0xb9, 0x86, 0xa4, 0x75,
      0x72, 0xfc, 0x13, 0x3a, 0x95, 0x5f, 0x22, 0x34,
      0x25, 0x0c, 0x75, 0xb8, 0x81, 0xee, 0x18, 0xdc,
      0xc1, 0x01, 0xda, 0x28, 0x7d, 0x07, 0xd2, 0x8e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__GetAvgVel_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x4e, 0x05, 0xec, 0x2b, 0xb6, 0x20, 0x83,
      0xb3, 0x07, 0xf1, 0x8b, 0xc6, 0x1b, 0x8c, 0xe7,
      0x81, 0x52, 0x76, 0xca, 0x98, 0x97, 0xfd, 0x4a,
      0x94, 0x91, 0x29, 0x41, 0xd0, 0xdd, 0x3a, 0x90,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__GetAvgVel_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x69, 0x6a, 0xbd, 0xf5, 0xec, 0x4f, 0x99,
      0xd1, 0x6f, 0xcf, 0x76, 0x02, 0x07, 0x95, 0x74,
      0x47, 0x45, 0x38, 0xad, 0x59, 0x46, 0x8d, 0x6a,
      0x0d, 0xbe, 0x8c, 0x77, 0xf2, 0x7e, 0x83, 0xe1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__GetAvgVel_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0xcd, 0x89, 0xb9, 0x19, 0x9c, 0xa5, 0x79,
      0x68, 0xf3, 0x0d, 0x94, 0xfe, 0x91, 0x3b, 0x8c,
      0xa0, 0xe4, 0xab, 0x0f, 0x98, 0xc2, 0x39, 0x6e,
      0xd3, 0x51, 0x1c, 0x47, 0xd3, 0x04, 0xbf, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rt1_assignment2__srv__GetAvgVel__TYPE_NAME[] = "rt1_assignment2/srv/GetAvgVel";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rt1_assignment2__srv__GetAvgVel_Event__TYPE_NAME[] = "rt1_assignment2/srv/GetAvgVel_Event";
static char rt1_assignment2__srv__GetAvgVel_Request__TYPE_NAME[] = "rt1_assignment2/srv/GetAvgVel_Request";
static char rt1_assignment2__srv__GetAvgVel_Response__TYPE_NAME[] = "rt1_assignment2/srv/GetAvgVel_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rt1_assignment2__srv__GetAvgVel__FIELD_NAME__request_message[] = "request_message";
static char rt1_assignment2__srv__GetAvgVel__FIELD_NAME__response_message[] = "response_message";
static char rt1_assignment2__srv__GetAvgVel__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rt1_assignment2__srv__GetAvgVel__FIELDS[] = {
  {
    {rt1_assignment2__srv__GetAvgVel__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rt1_assignment2__srv__GetAvgVel_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rt1_assignment2__srv__GetAvgVel_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rt1_assignment2__srv__GetAvgVel_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rt1_assignment2__srv__GetAvgVel__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__GetAvgVel__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rt1_assignment2__srv__GetAvgVel__TYPE_NAME, 29, 29},
      {rt1_assignment2__srv__GetAvgVel__FIELDS, 3, 3},
    },
    {rt1_assignment2__srv__GetAvgVel__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rt1_assignment2__srv__GetAvgVel_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rt1_assignment2__srv__GetAvgVel_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rt1_assignment2__srv__GetAvgVel_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rt1_assignment2__srv__GetAvgVel_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rt1_assignment2__srv__GetAvgVel_Request__FIELDS[] = {
  {
    {rt1_assignment2__srv__GetAvgVel_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__GetAvgVel_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rt1_assignment2__srv__GetAvgVel_Request__TYPE_NAME, 37, 37},
      {rt1_assignment2__srv__GetAvgVel_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rt1_assignment2__srv__GetAvgVel_Response__FIELD_NAME__avg_linear[] = "avg_linear";
static char rt1_assignment2__srv__GetAvgVel_Response__FIELD_NAME__avg_angular[] = "avg_angular";

static rosidl_runtime_c__type_description__Field rt1_assignment2__srv__GetAvgVel_Response__FIELDS[] = {
  {
    {rt1_assignment2__srv__GetAvgVel_Response__FIELD_NAME__avg_linear, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Response__FIELD_NAME__avg_angular, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__GetAvgVel_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rt1_assignment2__srv__GetAvgVel_Response__TYPE_NAME, 38, 38},
      {rt1_assignment2__srv__GetAvgVel_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rt1_assignment2__srv__GetAvgVel_Event__FIELD_NAME__info[] = "info";
static char rt1_assignment2__srv__GetAvgVel_Event__FIELD_NAME__request[] = "request";
static char rt1_assignment2__srv__GetAvgVel_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rt1_assignment2__srv__GetAvgVel_Event__FIELDS[] = {
  {
    {rt1_assignment2__srv__GetAvgVel_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rt1_assignment2__srv__GetAvgVel_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rt1_assignment2__srv__GetAvgVel_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rt1_assignment2__srv__GetAvgVel_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__srv__GetAvgVel_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__GetAvgVel_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rt1_assignment2__srv__GetAvgVel_Event__TYPE_NAME, 35, 35},
      {rt1_assignment2__srv__GetAvgVel_Event__FIELDS, 3, 3},
    },
    {rt1_assignment2__srv__GetAvgVel_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rt1_assignment2__srv__GetAvgVel_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rt1_assignment2__srv__GetAvgVel_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "float32 avg_linear\n"
  "float32 avg_angular";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__GetAvgVel__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rt1_assignment2__srv__GetAvgVel__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__GetAvgVel_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rt1_assignment2__srv__GetAvgVel_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__GetAvgVel_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rt1_assignment2__srv__GetAvgVel_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__GetAvgVel_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rt1_assignment2__srv__GetAvgVel_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__GetAvgVel__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rt1_assignment2__srv__GetAvgVel__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rt1_assignment2__srv__GetAvgVel_Event__get_individual_type_description_source(NULL);
    sources[3] = *rt1_assignment2__srv__GetAvgVel_Request__get_individual_type_description_source(NULL);
    sources[4] = *rt1_assignment2__srv__GetAvgVel_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__GetAvgVel_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rt1_assignment2__srv__GetAvgVel_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__GetAvgVel_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rt1_assignment2__srv__GetAvgVel_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__GetAvgVel_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rt1_assignment2__srv__GetAvgVel_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rt1_assignment2__srv__GetAvgVel_Request__get_individual_type_description_source(NULL);
    sources[3] = *rt1_assignment2__srv__GetAvgVel_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
