// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nimbro_api_interfaces:srv/TriggerFeedback.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__TRIGGER_FEEDBACK__STRUCT_H_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__TRIGGER_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TriggerFeedback in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__TriggerFeedback_Request
{
  uint8_t structure_needs_at_least_one_member;
} nimbro_api_interfaces__srv__TriggerFeedback_Request;

// Struct for a sequence of nimbro_api_interfaces__srv__TriggerFeedback_Request.
typedef struct nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence
{
  nimbro_api_interfaces__srv__TriggerFeedback_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TriggerFeedback in the package nimbro_api_interfaces.
typedef struct nimbro_api_interfaces__srv__TriggerFeedback_Response
{
  bool success;
  rosidl_runtime_c__String message;
} nimbro_api_interfaces__srv__TriggerFeedback_Response;

// Struct for a sequence of nimbro_api_interfaces__srv__TriggerFeedback_Response.
typedef struct nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence
{
  nimbro_api_interfaces__srv__TriggerFeedback_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__TRIGGER_FEEDBACK__STRUCT_H_
