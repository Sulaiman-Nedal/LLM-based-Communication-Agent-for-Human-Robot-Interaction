// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__STRUCT_H_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'api_type'
// Member 'api_flavor'
// Member 'model_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ApiUsage in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__msg__ApiUsage
{
  rosidl_runtime_c__String api_type;
  rosidl_runtime_c__String api_flavor;
  rosidl_runtime_c__String model_name;
  uint64_t input_tokens_uncached;
  uint64_t input_tokens_cached;
  uint64_t output_tokens;
} nimbro_api_interfaces__msg__ApiUsage;

// Struct for a sequence of nimbro_api_interfaces__msg__ApiUsage.
typedef struct nimbro_api_interfaces__msg__ApiUsage__Sequence
{
  nimbro_api_interfaces__msg__ApiUsage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__msg__ApiUsage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__STRUCT_H_
