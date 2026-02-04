// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rt1_assignment2:srv/SetThreshold.idl
// generated code does not contain a copyright notice
#include "rt1_assignment2/srv/detail/set_threshold__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rt1_assignment2__srv__SetThreshold_Request__init(rt1_assignment2__srv__SetThreshold_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  return true;
}

void
rt1_assignment2__srv__SetThreshold_Request__fini(rt1_assignment2__srv__SetThreshold_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
}

bool
rt1_assignment2__srv__SetThreshold_Request__are_equal(const rt1_assignment2__srv__SetThreshold_Request * lhs, const rt1_assignment2__srv__SetThreshold_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (lhs->input != rhs->input) {
    return false;
  }
  return true;
}

bool
rt1_assignment2__srv__SetThreshold_Request__copy(
  const rt1_assignment2__srv__SetThreshold_Request * input,
  rt1_assignment2__srv__SetThreshold_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  output->input = input->input;
  return true;
}

rt1_assignment2__srv__SetThreshold_Request *
rt1_assignment2__srv__SetThreshold_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Request * msg = (rt1_assignment2__srv__SetThreshold_Request *)allocator.allocate(sizeof(rt1_assignment2__srv__SetThreshold_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rt1_assignment2__srv__SetThreshold_Request));
  bool success = rt1_assignment2__srv__SetThreshold_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rt1_assignment2__srv__SetThreshold_Request__destroy(rt1_assignment2__srv__SetThreshold_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rt1_assignment2__srv__SetThreshold_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rt1_assignment2__srv__SetThreshold_Request__Sequence__init(rt1_assignment2__srv__SetThreshold_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Request * data = NULL;

  if (size) {
    data = (rt1_assignment2__srv__SetThreshold_Request *)allocator.zero_allocate(size, sizeof(rt1_assignment2__srv__SetThreshold_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rt1_assignment2__srv__SetThreshold_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rt1_assignment2__srv__SetThreshold_Request__fini(&data[i - 1]);
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
rt1_assignment2__srv__SetThreshold_Request__Sequence__fini(rt1_assignment2__srv__SetThreshold_Request__Sequence * array)
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
      rt1_assignment2__srv__SetThreshold_Request__fini(&array->data[i]);
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

rt1_assignment2__srv__SetThreshold_Request__Sequence *
rt1_assignment2__srv__SetThreshold_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Request__Sequence * array = (rt1_assignment2__srv__SetThreshold_Request__Sequence *)allocator.allocate(sizeof(rt1_assignment2__srv__SetThreshold_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rt1_assignment2__srv__SetThreshold_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rt1_assignment2__srv__SetThreshold_Request__Sequence__destroy(rt1_assignment2__srv__SetThreshold_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rt1_assignment2__srv__SetThreshold_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rt1_assignment2__srv__SetThreshold_Request__Sequence__are_equal(const rt1_assignment2__srv__SetThreshold_Request__Sequence * lhs, const rt1_assignment2__srv__SetThreshold_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rt1_assignment2__srv__SetThreshold_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rt1_assignment2__srv__SetThreshold_Request__Sequence__copy(
  const rt1_assignment2__srv__SetThreshold_Request__Sequence * input,
  rt1_assignment2__srv__SetThreshold_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rt1_assignment2__srv__SetThreshold_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rt1_assignment2__srv__SetThreshold_Request * data =
      (rt1_assignment2__srv__SetThreshold_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rt1_assignment2__srv__SetThreshold_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rt1_assignment2__srv__SetThreshold_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rt1_assignment2__srv__SetThreshold_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rt1_assignment2__srv__SetThreshold_Response__init(rt1_assignment2__srv__SetThreshold_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
rt1_assignment2__srv__SetThreshold_Response__fini(rt1_assignment2__srv__SetThreshold_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
rt1_assignment2__srv__SetThreshold_Response__are_equal(const rt1_assignment2__srv__SetThreshold_Response * lhs, const rt1_assignment2__srv__SetThreshold_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
rt1_assignment2__srv__SetThreshold_Response__copy(
  const rt1_assignment2__srv__SetThreshold_Response * input,
  rt1_assignment2__srv__SetThreshold_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

rt1_assignment2__srv__SetThreshold_Response *
rt1_assignment2__srv__SetThreshold_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Response * msg = (rt1_assignment2__srv__SetThreshold_Response *)allocator.allocate(sizeof(rt1_assignment2__srv__SetThreshold_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rt1_assignment2__srv__SetThreshold_Response));
  bool success = rt1_assignment2__srv__SetThreshold_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rt1_assignment2__srv__SetThreshold_Response__destroy(rt1_assignment2__srv__SetThreshold_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rt1_assignment2__srv__SetThreshold_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rt1_assignment2__srv__SetThreshold_Response__Sequence__init(rt1_assignment2__srv__SetThreshold_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Response * data = NULL;

  if (size) {
    data = (rt1_assignment2__srv__SetThreshold_Response *)allocator.zero_allocate(size, sizeof(rt1_assignment2__srv__SetThreshold_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rt1_assignment2__srv__SetThreshold_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rt1_assignment2__srv__SetThreshold_Response__fini(&data[i - 1]);
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
rt1_assignment2__srv__SetThreshold_Response__Sequence__fini(rt1_assignment2__srv__SetThreshold_Response__Sequence * array)
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
      rt1_assignment2__srv__SetThreshold_Response__fini(&array->data[i]);
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

rt1_assignment2__srv__SetThreshold_Response__Sequence *
rt1_assignment2__srv__SetThreshold_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Response__Sequence * array = (rt1_assignment2__srv__SetThreshold_Response__Sequence *)allocator.allocate(sizeof(rt1_assignment2__srv__SetThreshold_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rt1_assignment2__srv__SetThreshold_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rt1_assignment2__srv__SetThreshold_Response__Sequence__destroy(rt1_assignment2__srv__SetThreshold_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rt1_assignment2__srv__SetThreshold_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rt1_assignment2__srv__SetThreshold_Response__Sequence__are_equal(const rt1_assignment2__srv__SetThreshold_Response__Sequence * lhs, const rt1_assignment2__srv__SetThreshold_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rt1_assignment2__srv__SetThreshold_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rt1_assignment2__srv__SetThreshold_Response__Sequence__copy(
  const rt1_assignment2__srv__SetThreshold_Response__Sequence * input,
  rt1_assignment2__srv__SetThreshold_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rt1_assignment2__srv__SetThreshold_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rt1_assignment2__srv__SetThreshold_Response * data =
      (rt1_assignment2__srv__SetThreshold_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rt1_assignment2__srv__SetThreshold_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rt1_assignment2__srv__SetThreshold_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rt1_assignment2__srv__SetThreshold_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "rt1_assignment2/srv/detail/set_threshold__functions.h"

bool
rt1_assignment2__srv__SetThreshold_Event__init(rt1_assignment2__srv__SetThreshold_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    rt1_assignment2__srv__SetThreshold_Event__fini(msg);
    return false;
  }
  // request
  if (!rt1_assignment2__srv__SetThreshold_Request__Sequence__init(&msg->request, 0)) {
    rt1_assignment2__srv__SetThreshold_Event__fini(msg);
    return false;
  }
  // response
  if (!rt1_assignment2__srv__SetThreshold_Response__Sequence__init(&msg->response, 0)) {
    rt1_assignment2__srv__SetThreshold_Event__fini(msg);
    return false;
  }
  return true;
}

void
rt1_assignment2__srv__SetThreshold_Event__fini(rt1_assignment2__srv__SetThreshold_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  rt1_assignment2__srv__SetThreshold_Request__Sequence__fini(&msg->request);
  // response
  rt1_assignment2__srv__SetThreshold_Response__Sequence__fini(&msg->response);
}

bool
rt1_assignment2__srv__SetThreshold_Event__are_equal(const rt1_assignment2__srv__SetThreshold_Event * lhs, const rt1_assignment2__srv__SetThreshold_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!rt1_assignment2__srv__SetThreshold_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!rt1_assignment2__srv__SetThreshold_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
rt1_assignment2__srv__SetThreshold_Event__copy(
  const rt1_assignment2__srv__SetThreshold_Event * input,
  rt1_assignment2__srv__SetThreshold_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!rt1_assignment2__srv__SetThreshold_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!rt1_assignment2__srv__SetThreshold_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

rt1_assignment2__srv__SetThreshold_Event *
rt1_assignment2__srv__SetThreshold_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Event * msg = (rt1_assignment2__srv__SetThreshold_Event *)allocator.allocate(sizeof(rt1_assignment2__srv__SetThreshold_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rt1_assignment2__srv__SetThreshold_Event));
  bool success = rt1_assignment2__srv__SetThreshold_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rt1_assignment2__srv__SetThreshold_Event__destroy(rt1_assignment2__srv__SetThreshold_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rt1_assignment2__srv__SetThreshold_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rt1_assignment2__srv__SetThreshold_Event__Sequence__init(rt1_assignment2__srv__SetThreshold_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Event * data = NULL;

  if (size) {
    data = (rt1_assignment2__srv__SetThreshold_Event *)allocator.zero_allocate(size, sizeof(rt1_assignment2__srv__SetThreshold_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rt1_assignment2__srv__SetThreshold_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rt1_assignment2__srv__SetThreshold_Event__fini(&data[i - 1]);
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
rt1_assignment2__srv__SetThreshold_Event__Sequence__fini(rt1_assignment2__srv__SetThreshold_Event__Sequence * array)
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
      rt1_assignment2__srv__SetThreshold_Event__fini(&array->data[i]);
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

rt1_assignment2__srv__SetThreshold_Event__Sequence *
rt1_assignment2__srv__SetThreshold_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_assignment2__srv__SetThreshold_Event__Sequence * array = (rt1_assignment2__srv__SetThreshold_Event__Sequence *)allocator.allocate(sizeof(rt1_assignment2__srv__SetThreshold_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rt1_assignment2__srv__SetThreshold_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rt1_assignment2__srv__SetThreshold_Event__Sequence__destroy(rt1_assignment2__srv__SetThreshold_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rt1_assignment2__srv__SetThreshold_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rt1_assignment2__srv__SetThreshold_Event__Sequence__are_equal(const rt1_assignment2__srv__SetThreshold_Event__Sequence * lhs, const rt1_assignment2__srv__SetThreshold_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rt1_assignment2__srv__SetThreshold_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rt1_assignment2__srv__SetThreshold_Event__Sequence__copy(
  const rt1_assignment2__srv__SetThreshold_Event__Sequence * input,
  rt1_assignment2__srv__SetThreshold_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rt1_assignment2__srv__SetThreshold_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rt1_assignment2__srv__SetThreshold_Event * data =
      (rt1_assignment2__srv__SetThreshold_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rt1_assignment2__srv__SetThreshold_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rt1_assignment2__srv__SetThreshold_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rt1_assignment2__srv__SetThreshold_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
