// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:msg/Embedding.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__STRUCT_H_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'embedding'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Embedding in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__msg__Embedding
{
  rosidl_runtime_c__float__Sequence embedding;
} nimbro_api_interfaces__msg__Embedding;

// Struct for a sequence of nimbro_api_interfaces__msg__Embedding.
typedef struct nimbro_api_interfaces__msg__Embedding__Sequence
{
  nimbro_api_interfaces__msg__Embedding * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__msg__Embedding__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__EMBEDDING__STRUCT_H_
