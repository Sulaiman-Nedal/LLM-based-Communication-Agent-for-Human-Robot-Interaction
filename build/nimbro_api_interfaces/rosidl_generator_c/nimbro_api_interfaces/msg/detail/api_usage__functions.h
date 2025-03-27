// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__FUNCTIONS_H_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nimbro_api_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "nimbro_api_interfaces/msg/detail/api_usage__struct.h"

/// Initialize msg/ApiUsage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nimbro_api_interfaces__msg__ApiUsage
 * )) before or use
 * nimbro_api_interfaces__msg__ApiUsage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
bool
nimbro_api_interfaces__msg__ApiUsage__init(nimbro_api_interfaces__msg__ApiUsage * msg);

/// Finalize msg/ApiUsage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
void
nimbro_api_interfaces__msg__ApiUsage__fini(nimbro_api_interfaces__msg__ApiUsage * msg);

/// Create msg/ApiUsage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nimbro_api_interfaces__msg__ApiUsage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
nimbro_api_interfaces__msg__ApiUsage *
nimbro_api_interfaces__msg__ApiUsage__create();

/// Destroy msg/ApiUsage message.
/**
 * It calls
 * nimbro_api_interfaces__msg__ApiUsage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
void
nimbro_api_interfaces__msg__ApiUsage__destroy(nimbro_api_interfaces__msg__ApiUsage * msg);

/// Check for msg/ApiUsage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
bool
nimbro_api_interfaces__msg__ApiUsage__are_equal(const nimbro_api_interfaces__msg__ApiUsage * lhs, const nimbro_api_interfaces__msg__ApiUsage * rhs);

/// Copy a msg/ApiUsage message.
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
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
bool
nimbro_api_interfaces__msg__ApiUsage__copy(
  const nimbro_api_interfaces__msg__ApiUsage * input,
  nimbro_api_interfaces__msg__ApiUsage * output);

/// Initialize array of msg/ApiUsage messages.
/**
 * It allocates the memory for the number of elements and calls
 * nimbro_api_interfaces__msg__ApiUsage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
bool
nimbro_api_interfaces__msg__ApiUsage__Sequence__init(nimbro_api_interfaces__msg__ApiUsage__Sequence * array, size_t size);

/// Finalize array of msg/ApiUsage messages.
/**
 * It calls
 * nimbro_api_interfaces__msg__ApiUsage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
void
nimbro_api_interfaces__msg__ApiUsage__Sequence__fini(nimbro_api_interfaces__msg__ApiUsage__Sequence * array);

/// Create array of msg/ApiUsage messages.
/**
 * It allocates the memory for the array and calls
 * nimbro_api_interfaces__msg__ApiUsage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
nimbro_api_interfaces__msg__ApiUsage__Sequence *
nimbro_api_interfaces__msg__ApiUsage__Sequence__create(size_t size);

/// Destroy array of msg/ApiUsage messages.
/**
 * It calls
 * nimbro_api_interfaces__msg__ApiUsage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
void
nimbro_api_interfaces__msg__ApiUsage__Sequence__destroy(nimbro_api_interfaces__msg__ApiUsage__Sequence * array);

/// Check for msg/ApiUsage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
bool
nimbro_api_interfaces__msg__ApiUsage__Sequence__are_equal(const nimbro_api_interfaces__msg__ApiUsage__Sequence * lhs, const nimbro_api_interfaces__msg__ApiUsage__Sequence * rhs);

/// Copy an array of msg/ApiUsage messages.
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
ROSIDL_GENERATOR_C_PUBLIC_nimbro_api_interfaces
bool
nimbro_api_interfaces__msg__ApiUsage__Sequence__copy(
  const nimbro_api_interfaces__msg__ApiUsage__Sequence * input,
  nimbro_api_interfaces__msg__ApiUsage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__FUNCTIONS_H_
