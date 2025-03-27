// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nimbro_api_interfaces:srv/CompletionsStop.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nimbro_api_interfaces/srv/detail/completions_stop__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CompletionsStop_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nimbro_api_interfaces::srv::CompletionsStop_Request(_init);
}

void CompletionsStop_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nimbro_api_interfaces::srv::CompletionsStop_Request *>(message_memory);
  typed_message->~CompletionsStop_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CompletionsStop_Request_message_member_array[1] = {
  {
    "completions_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsStop_Request, completions_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CompletionsStop_Request_message_members = {
  "nimbro_api_interfaces::srv",  // message namespace
  "CompletionsStop_Request",  // message name
  1,  // number of fields
  sizeof(nimbro_api_interfaces::srv::CompletionsStop_Request),
  CompletionsStop_Request_message_member_array,  // message members
  CompletionsStop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsStop_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CompletionsStop_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsStop_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsStop_Request>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsStop_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsStop_Request)() {
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsStop_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_stop__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CompletionsStop_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nimbro_api_interfaces::srv::CompletionsStop_Response(_init);
}

void CompletionsStop_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nimbro_api_interfaces::srv::CompletionsStop_Response *>(message_memory);
  typed_message->~CompletionsStop_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CompletionsStop_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsStop_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsStop_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CompletionsStop_Response_message_members = {
  "nimbro_api_interfaces::srv",  // message namespace
  "CompletionsStop_Response",  // message name
  2,  // number of fields
  sizeof(nimbro_api_interfaces::srv::CompletionsStop_Response),
  CompletionsStop_Response_message_member_array,  // message members
  CompletionsStop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsStop_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CompletionsStop_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsStop_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsStop_Response>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsStop_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsStop_Response)() {
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsStop_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_stop__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CompletionsStop_service_members = {
  "nimbro_api_interfaces::srv",  // service namespace
  "CompletionsStop",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsStop>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CompletionsStop_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsStop_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsStop>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsStop_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nimbro_api_interfaces::srv::CompletionsStop_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nimbro_api_interfaces::srv::CompletionsStop_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsStop)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsStop>();
}

#ifdef __cplusplus
}
#endif
