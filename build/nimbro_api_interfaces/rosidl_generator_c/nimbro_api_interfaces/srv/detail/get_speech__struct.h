// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:srv/GetSpeech.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_SPEECH__STRUCT_H_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_SPEECH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
// Member 'model'
// Member 'voice'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetSpeech in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__GetSpeech_Request
{
  rosidl_runtime_c__String text;
  rosidl_runtime_c__String model;
  rosidl_runtime_c__String voice;
  float speed;
} nimbro_api_interfaces__srv__GetSpeech_Request;

// Struct for a sequence of nimbro_api_interfaces__srv__GetSpeech_Request.
typedef struct nimbro_api_interfaces__srv__GetSpeech_Request__Sequence
{
  nimbro_api_interfaces__srv__GetSpeech_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__GetSpeech_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'path'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetSpeech in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__GetSpeech_Response
{
  bool success;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String path;
} nimbro_api_interfaces__srv__GetSpeech_Response;

// Struct for a sequence of nimbro_api_interfaces__srv__GetSpeech_Response.
typedef struct nimbro_api_interfaces__srv__GetSpeech_Response__Sequence
{
  nimbro_api_interfaces__srv__GetSpeech_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__GetSpeech_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_SPEECH__STRUCT_H_
