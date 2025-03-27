// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:srv/GetImage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_H_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prompt'
// Member 'model'
// Member 'quality'
// Member 'style'
// Member 'size'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetImage in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__GetImage_Request
{
  rosidl_runtime_c__String prompt;
  rosidl_runtime_c__String model;
  rosidl_runtime_c__String quality;
  rosidl_runtime_c__String style;
  rosidl_runtime_c__String size;
} nimbro_api_interfaces__srv__GetImage_Request;

// Struct for a sequence of nimbro_api_interfaces__srv__GetImage_Request.
typedef struct nimbro_api_interfaces__srv__GetImage_Request__Sequence
{
  nimbro_api_interfaces__srv__GetImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__GetImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'path'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/GetImage in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__GetImage_Response
{
  bool success;
  rosidl_runtime_c__String message;
  sensor_msgs__msg__Image image;
  rosidl_runtime_c__String path;
} nimbro_api_interfaces__srv__GetImage_Response;

// Struct for a sequence of nimbro_api_interfaces__srv__GetImage_Response.
typedef struct nimbro_api_interfaces__srv__GetImage_Response__Sequence
{
  nimbro_api_interfaces__srv__GetImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__GetImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_H_
