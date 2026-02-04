// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rt1_assignment2:msg/Info.idl
// generated code does not contain a copyright notice

#include "rt1_assignment2/msg/detail/info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__msg__Info__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x54, 0x15, 0x2f, 0xf0, 0xbf, 0x0a, 0xc1,
      0xfc, 0xda, 0xa5, 0x54, 0xbe, 0xf5, 0x72, 0xb7,
      0x49, 0x72, 0x1b, 0xcc, 0x5c, 0xc2, 0x4c, 0x2b,
      0x7f, 0x21, 0x3a, 0x0b, 0x6f, 0xd9, 0x0b, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rt1_assignment2__msg__Info__TYPE_NAME[] = "rt1_assignment2/msg/Info";

// Define type names, field names, and default values
static char rt1_assignment2__msg__Info__FIELD_NAME__distance[] = "distance";
static char rt1_assignment2__msg__Info__FIELD_NAME__direction[] = "direction";
static char rt1_assignment2__msg__Info__FIELD_NAME__threshold[] = "threshold";

static rosidl_runtime_c__type_description__Field rt1_assignment2__msg__Info__FIELDS[] = {
  {
    {rt1_assignment2__msg__Info__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__msg__Info__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rt1_assignment2__msg__Info__FIELD_NAME__threshold, 9, 9},
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
rt1_assignment2__msg__Info__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rt1_assignment2__msg__Info__TYPE_NAME, 24, 24},
      {rt1_assignment2__msg__Info__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 distance\n"
  "string direction\n"
  "float32 threshold";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__msg__Info__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rt1_assignment2__msg__Info__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__msg__Info__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rt1_assignment2__msg__Info__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
