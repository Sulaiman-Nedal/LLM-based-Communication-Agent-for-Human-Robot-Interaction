// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nimbro_api_interfaces:srv/CompletionsGetSettings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nimbro_api_interfaces/srv/detail/completions_get_settings__rosidl_typesupport_introspection_c.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nimbro_api_interfaces/srv/detail/completions_get_settings__functions.h"
#include "nimbro_api_interfaces/srv/detail/completions_get_settings__struct.h"


// Include directives for member types
// Member `completions_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsGetSettings_Request__init(message_memory);
}

void CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsGetSettings_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_member_array[1] = {
  {
    "completions_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetSettings_Request, completions_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsGetSettings_Request",  // message name
  1,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsGetSettings_Request),
  CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_member_array,  // message members
  CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_type_support_handle = {
  0,
  &CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetSettings_Request)() {
  if (!CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_type_support_handle.typesupport_identifier) {
    CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsGetSettings_Request__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_settings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_settings__functions.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_settings__struct.h"


// Include directives for member types
// Member `message`
// Member `parameter_names`
// Member `parameter_values`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `parameter_types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nimbro_api_interfaces__srv__CompletionsGetSettings_Response__init(message_memory);
}

void CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_fini_function(void * message_memory)
{
  nimbro_api_interfaces__srv__CompletionsGetSettings_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_member_array[5] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetSettings_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetSettings_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetSettings_Response, parameter_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetSettings_Response, parameter_types),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces__srv__CompletionsGetSettings_Response, parameter_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_members = {
  "nimbro_api_interfaces__srv",  // message namespace
  "CompletionsGetSettings_Response",  // message name
  5,  // number of fields
  sizeof(nimbro_api_interfaces__srv__CompletionsGetSettings_Response),
  CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_member_array,  // message members
  CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_type_support_handle = {
  0,
  &CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetSettings_Response)() {
  if (!CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_type_support_handle.typesupport_identifier) {
    CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CompletionsGetSettings_Response__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_get_settings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_service_members = {
  "nimbro_api_interfaces__srv",  // service namespace
  "CompletionsGetSettings",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_Request_message_type_support_handle,
  NULL  // response message
  // nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_Response_message_type_support_handle
};

static rosidl_service_type_support_t nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_service_type_support_handle = {
  0,
  &nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetSettings_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetSettings_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nimbro_api_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetSettings)() {
  if (!nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_service_type_support_handle.typesupport_identifier) {
    nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetSettings_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nimbro_api_interfaces, srv, CompletionsGetSettings_Response)()->data;
  }

  return &nimbro_api_interfaces__srv__detail__completions_get_settings__rosidl_typesupport_introspection_c__CompletionsGetSettings_service_type_support_handle;
}
