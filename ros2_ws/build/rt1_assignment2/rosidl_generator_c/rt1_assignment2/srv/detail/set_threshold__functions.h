// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rt1_assignment2:srv/SetThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/srv/set_threshold.h"


#ifndef RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__FUNCTIONS_H_
#define RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rt1_assignment2/msg/rosidl_generator_c__visibility_control.h"

#include "rt1_assignment2/srv/detail/set_threshold__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__SetThreshold__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__SetThreshold__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__SetThreshold__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__SetThreshold__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SetThreshold message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rt1_assignment2__srv__SetThreshold_Request
 * )) before or use
 * rt1_assignment2__srv__SetThreshold_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Request__init(rt1_assignment2__srv__SetThreshold_Request * msg);

/// Finalize srv/SetThreshold message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Request__fini(rt1_assignment2__srv__SetThreshold_Request * msg);

/// Create srv/SetThreshold message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rt1_assignment2__srv__SetThreshold_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
rt1_assignment2__srv__SetThreshold_Request *
rt1_assignment2__srv__SetThreshold_Request__create(void);

/// Destroy srv/SetThreshold message.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Request__destroy(rt1_assignment2__srv__SetThreshold_Request * msg);

/// Check for srv/SetThreshold message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Request__are_equal(const rt1_assignment2__srv__SetThreshold_Request * lhs, const rt1_assignment2__srv__SetThreshold_Request * rhs);

/// Copy a srv/SetThreshold message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Request__copy(
  const rt1_assignment2__srv__SetThreshold_Request * input,
  rt1_assignment2__srv__SetThreshold_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__SetThreshold_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__SetThreshold_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__SetThreshold_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__SetThreshold_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetThreshold messages.
/**
 * It allocates the memory for the number of elements and calls
 * rt1_assignment2__srv__SetThreshold_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Request__Sequence__init(rt1_assignment2__srv__SetThreshold_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetThreshold messages.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Request__Sequence__fini(rt1_assignment2__srv__SetThreshold_Request__Sequence * array);

/// Create array of srv/SetThreshold messages.
/**
 * It allocates the memory for the array and calls
 * rt1_assignment2__srv__SetThreshold_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
rt1_assignment2__srv__SetThreshold_Request__Sequence *
rt1_assignment2__srv__SetThreshold_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetThreshold messages.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Request__Sequence__destroy(rt1_assignment2__srv__SetThreshold_Request__Sequence * array);

/// Check for srv/SetThreshold message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Request__Sequence__are_equal(const rt1_assignment2__srv__SetThreshold_Request__Sequence * lhs, const rt1_assignment2__srv__SetThreshold_Request__Sequence * rhs);

/// Copy an array of srv/SetThreshold messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Request__Sequence__copy(
  const rt1_assignment2__srv__SetThreshold_Request__Sequence * input,
  rt1_assignment2__srv__SetThreshold_Request__Sequence * output);

/// Initialize srv/SetThreshold message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rt1_assignment2__srv__SetThreshold_Response
 * )) before or use
 * rt1_assignment2__srv__SetThreshold_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Response__init(rt1_assignment2__srv__SetThreshold_Response * msg);

/// Finalize srv/SetThreshold message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Response__fini(rt1_assignment2__srv__SetThreshold_Response * msg);

/// Create srv/SetThreshold message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rt1_assignment2__srv__SetThreshold_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
rt1_assignment2__srv__SetThreshold_Response *
rt1_assignment2__srv__SetThreshold_Response__create(void);

/// Destroy srv/SetThreshold message.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Response__destroy(rt1_assignment2__srv__SetThreshold_Response * msg);

/// Check for srv/SetThreshold message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Response__are_equal(const rt1_assignment2__srv__SetThreshold_Response * lhs, const rt1_assignment2__srv__SetThreshold_Response * rhs);

/// Copy a srv/SetThreshold message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Response__copy(
  const rt1_assignment2__srv__SetThreshold_Response * input,
  rt1_assignment2__srv__SetThreshold_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__SetThreshold_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__SetThreshold_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__SetThreshold_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__SetThreshold_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetThreshold messages.
/**
 * It allocates the memory for the number of elements and calls
 * rt1_assignment2__srv__SetThreshold_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Response__Sequence__init(rt1_assignment2__srv__SetThreshold_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetThreshold messages.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Response__Sequence__fini(rt1_assignment2__srv__SetThreshold_Response__Sequence * array);

/// Create array of srv/SetThreshold messages.
/**
 * It allocates the memory for the array and calls
 * rt1_assignment2__srv__SetThreshold_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
rt1_assignment2__srv__SetThreshold_Response__Sequence *
rt1_assignment2__srv__SetThreshold_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetThreshold messages.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Response__Sequence__destroy(rt1_assignment2__srv__SetThreshold_Response__Sequence * array);

/// Check for srv/SetThreshold message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Response__Sequence__are_equal(const rt1_assignment2__srv__SetThreshold_Response__Sequence * lhs, const rt1_assignment2__srv__SetThreshold_Response__Sequence * rhs);

/// Copy an array of srv/SetThreshold messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Response__Sequence__copy(
  const rt1_assignment2__srv__SetThreshold_Response__Sequence * input,
  rt1_assignment2__srv__SetThreshold_Response__Sequence * output);

/// Initialize srv/SetThreshold message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rt1_assignment2__srv__SetThreshold_Event
 * )) before or use
 * rt1_assignment2__srv__SetThreshold_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Event__init(rt1_assignment2__srv__SetThreshold_Event * msg);

/// Finalize srv/SetThreshold message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Event__fini(rt1_assignment2__srv__SetThreshold_Event * msg);

/// Create srv/SetThreshold message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rt1_assignment2__srv__SetThreshold_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
rt1_assignment2__srv__SetThreshold_Event *
rt1_assignment2__srv__SetThreshold_Event__create(void);

/// Destroy srv/SetThreshold message.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Event__destroy(rt1_assignment2__srv__SetThreshold_Event * msg);

/// Check for srv/SetThreshold message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Event__are_equal(const rt1_assignment2__srv__SetThreshold_Event * lhs, const rt1_assignment2__srv__SetThreshold_Event * rhs);

/// Copy a srv/SetThreshold message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Event__copy(
  const rt1_assignment2__srv__SetThreshold_Event * input,
  rt1_assignment2__srv__SetThreshold_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_type_hash_t *
rt1_assignment2__srv__SetThreshold_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeDescription *
rt1_assignment2__srv__SetThreshold_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource *
rt1_assignment2__srv__SetThreshold_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rt1_assignment2__srv__SetThreshold_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetThreshold messages.
/**
 * It allocates the memory for the number of elements and calls
 * rt1_assignment2__srv__SetThreshold_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Event__Sequence__init(rt1_assignment2__srv__SetThreshold_Event__Sequence * array, size_t size);

/// Finalize array of srv/SetThreshold messages.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Event__Sequence__fini(rt1_assignment2__srv__SetThreshold_Event__Sequence * array);

/// Create array of srv/SetThreshold messages.
/**
 * It allocates the memory for the array and calls
 * rt1_assignment2__srv__SetThreshold_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
rt1_assignment2__srv__SetThreshold_Event__Sequence *
rt1_assignment2__srv__SetThreshold_Event__Sequence__create(size_t size);

/// Destroy array of srv/SetThreshold messages.
/**
 * It calls
 * rt1_assignment2__srv__SetThreshold_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
void
rt1_assignment2__srv__SetThreshold_Event__Sequence__destroy(rt1_assignment2__srv__SetThreshold_Event__Sequence * array);

/// Check for srv/SetThreshold message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Event__Sequence__are_equal(const rt1_assignment2__srv__SetThreshold_Event__Sequence * lhs, const rt1_assignment2__srv__SetThreshold_Event__Sequence * rhs);

/// Copy an array of srv/SetThreshold messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rt1_assignment2
bool
rt1_assignment2__srv__SetThreshold_Event__Sequence__copy(
  const rt1_assignment2__srv__SetThreshold_Event__Sequence * input,
  rt1_assignment2__srv__SetThreshold_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__FUNCTIONS_H_
