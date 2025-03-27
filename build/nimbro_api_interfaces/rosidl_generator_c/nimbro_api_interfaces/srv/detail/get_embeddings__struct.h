// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:srv/GetEmbeddings.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__STRUCT_H_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'texts'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetEmbeddings in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__GetEmbeddings_Request
{
  rosidl_runtime_c__String__Sequence texts;
} nimbro_api_interfaces__srv__GetEmbeddings_Request;

// Struct for a sequence of nimbro_api_interfaces__srv__GetEmbeddings_Request.
typedef struct nimbro_api_interfaces__srv__GetEmbeddings_Request__Sequence
{
  nimbro_api_interfaces__srv__GetEmbeddings_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__GetEmbeddings_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'embeddings'
#include "nimbro_api_interfaces/msg/detail/embedding__struct.h"

// Struct defined in srv/GetEmbeddings in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__GetEmbeddings_Response
{
  bool success;
  rosidl_runtime_c__String message;
  nimbro_api_interfaces__msg__Embedding__Sequence embeddings;
} nimbro_api_interfaces__srv__GetEmbeddings_Response;

// Struct for a sequence of nimbro_api_interfaces__srv__GetEmbeddings_Response.
typedef struct nimbro_api_interfaces__srv__GetEmbeddings_Response__Sequence
{
  nimbro_api_interfaces__srv__GetEmbeddings_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__GetEmbeddings_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_EMBEDDINGS__STRUCT_H_
