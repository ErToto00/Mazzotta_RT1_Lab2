// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rt1_assignment2:msg/Info.idl
// generated code does not contain a copyright notice
#include "rt1_assignment2/msg/detail/info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
rt1_assignment2__msg__Info__init(rt1_assignment2__msg__Info * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    rt1_assignment2__msg__Info__fini(msg);
    return false;
  }
  // threshold
  return true;
}

void
rt1_assignment2__msg__Info__fini(rt1_assignment2__msg__Info * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // threshold
}

bool
rt1_assignment2__msg__Info__are_equal(const rt1_assignment2__msg__Info * lhs, const rt1_assignment2__msg__Info * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // threshold
  if (lhs->threshold != rhs->threshold) {
    return false;
  }
  return true;
}

bool
rt1_assignment2__msg__Info__copy(
  const rt1_assignment2__msg__Info * input,
  rt1_assignment2__msg__Info * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // threshold
  output->threshold = input->threshold;
  return true;
}

rt1_assignment2__msg__Info *
rt1_assignment2__msg__Info__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__msg__Info * msg = (rt1_assignment2__msg__Info *)allocator.allocate(sizeof(rt1_assignment2__msg__Info), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rt1_assignment2__msg__Info));
  bool success = rt1_assignment2__msg__Info__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rt1_assignment2__msg__Info__destroy(rt1_assignment2__msg__Info * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rt1_assignment2__msg__Info__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rt1_assignment2__msg__Info__Sequence__init(rt1_assignment2__msg__Info__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__msg__Info * data = NULL;

  if (size) {
    data = (rt1_assignment2__msg__Info *)allocator.zero_allocate(size, sizeof(rt1_assignment2__msg__Info), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rt1_assignment2__msg__Info__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rt1_assignment2__msg__Info__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rt1_assignment2__msg__Info__Sequence__fini(rt1_assignment2__msg__Info__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rt1_assignment2__msg__Info__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rt1_assignment2__msg__Info__Sequence *
rt1_assignment2__msg__Info__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__msg__Info__Sequence * array = (rt1_assignment2__msg__Info__Sequence *)allocator.allocate(sizeof(rt1_assignment2__msg__Info__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rt1_assignment2__msg__Info__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rt1_assignment2__msg__Info__Sequence__destroy(rt1_assignment2__msg__Info__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rt1_assignment2__msg__Info__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rt1_assignment2__msg__Info__Sequence__are_equal(const rt1_assignment2__msg__Info__Sequence * lhs, const rt1_assignment2__msg__Info__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rt1_assignment2__msg__Info__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rt1_assignment2__msg__Info__Sequence__copy(
  const rt1_assignment2__msg__Info__Sequence * input,
  rt1_assignment2__msg__Info__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rt1_assignment2__msg__Info);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rt1_assignment2__msg__Info * data =
      (rt1_assignment2__msg__Info *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rt1_assignment2__msg__Info__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rt1_assignment2__msg__Info__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rt1_assignment2__msg__Info__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
