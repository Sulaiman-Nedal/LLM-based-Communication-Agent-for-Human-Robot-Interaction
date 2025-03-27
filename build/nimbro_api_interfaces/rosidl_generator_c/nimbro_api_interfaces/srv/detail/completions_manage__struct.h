// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:srv/CompletionsManage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__STRUCT_H_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'completions_id'
// Member 'action'
// Member 'parameter_names'
// Member 'parameter_values'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/CompletionsManage in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__CompletionsManage_Request
{
  rosidl_runtime_c__String completions_id;
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String__Sequence parameter_names;
  rosidl_runtime_c__String__Sequence parameter_values;
} nimbro_api_interfaces__srv__CompletionsManage_Request;

// Struct for a sequence of nimbro_api_interfaces__srv__CompletionsManage_Request.
typedef struct nimbro_api_interfaces__srv__CompletionsManage_Request__Sequence
{
  nimbro_api_interfaces__srv__CompletionsManage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__CompletionsManage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'completions_id'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/CompletionsManage in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__CompletionsManage_Response
{
  bool success;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String completions_id;
} nimbro_api_interfaces__srv__CompletionsManage_Response;

// Struct for a sequence of nimbro_api_interfaces__srv__CompletionsManage_Response.
typedef struct nimbro_api_interfaces__srv__CompletionsManage_Response__Sequence
{
  nimbro_api_interfaces__srv__CompletionsManage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__CompletionsManage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__STRUCT_H_
