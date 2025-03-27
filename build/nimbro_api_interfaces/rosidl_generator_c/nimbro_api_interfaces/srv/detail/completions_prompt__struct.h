// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__STRUCT_H_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__STRUCT_H_

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
// Member 'role'
// Member 'text'
// Member 'tool_response_id'
// Member 'response_type'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/CompletionsPrompt in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__CompletionsPrompt_Request
{
  rosidl_runtime_c__String completions_id;
  rosidl_runtime_c__String role;
  rosidl_runtime_c__String text;
  bool reset_context;
  rosidl_runtime_c__String tool_response_id;
  rosidl_runtime_c__String response_type;
} nimbro_api_interfaces__srv__CompletionsPrompt_Request;

// Struct for a sequence of nimbro_api_interfaces__srv__CompletionsPrompt_Request.
typedef struct nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence
{
  nimbro_api_interfaces__srv__CompletionsPrompt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__CompletionsPrompt_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'text'
// Member 'tool_calls'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/CompletionsPrompt in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__CompletionsPrompt_Response
{
  bool success;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String text;
  rosidl_runtime_c__String__Sequence tool_calls;
} nimbro_api_interfaces__srv__CompletionsPrompt_Response;

// Struct for a sequence of nimbro_api_interfaces__srv__CompletionsPrompt_Response.
typedef struct nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence
{
  nimbro_api_interfaces__srv__CompletionsPrompt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__CompletionsPrompt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__STRUCT_H_
