// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nimbro_api_interfaces:srv/CompletionsSetTools.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nimbro_api_interfaces/srv/detail/completions_set_tools__struct.hpp"
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

void CompletionsSetTools_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nimbro_api_interfaces::srv::CompletionsSetTools_Request(_init);
}

void CompletionsSetTools_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nimbro_api_interfaces::srv::CompletionsSetTools_Request *>(message_memory);
  typed_message->~CompletionsSetTools_Request();
}

size_t size_function__CompletionsSetTools_Request__tools(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CompletionsSetTools_Request__tools(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CompletionsSetTools_Request__tools(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__CompletionsSetTools_Request__tools(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CompletionsSetTools_Request_message_member_array[2] = {
  {
    "completions_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsSetTools_Request, completions_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tools",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsSetTools_Request, tools),  // bytes offset in struct
    nullptr,  // default value
    size_function__CompletionsSetTools_Request__tools,  // size() function pointer
    get_const_function__CompletionsSetTools_Request__tools,  // get_const(index) function pointer
    get_function__CompletionsSetTools_Request__tools,  // get(index) function pointer
    resize_function__CompletionsSetTools_Request__tools  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CompletionsSetTools_Request_message_members = {
  "nimbro_api_interfaces::srv",  // message namespace
  "CompletionsSetTools_Request",  // message name
  2,  // number of fields
  sizeof(nimbro_api_interfaces::srv::CompletionsSetTools_Request),
  CompletionsSetTools_Request_message_member_array,  // message members
  CompletionsSetTools_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsSetTools_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CompletionsSetTools_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsSetTools_Request_message_members,
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
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsSetTools_Request>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsSetTools_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsSetTools_Request)() {
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsSetTools_Request_message_type_support_handle;
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
// #include "nimbro_api_interfaces/srv/detail/completions_set_tools__struct.hpp"
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

void CompletionsSetTools_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nimbro_api_interfaces::srv::CompletionsSetTools_Response(_init);
}

void CompletionsSetTools_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nimbro_api_interfaces::srv::CompletionsSetTools_Response *>(message_memory);
  typed_message->~CompletionsSetTools_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CompletionsSetTools_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nimbro_api_interfaces::srv::CompletionsSetTools_Response, success),  // bytes offset in struct
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
    offsetof(nimbro_api_interfaces::srv::CompletionsSetTools_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CompletionsSetTools_Response_message_members = {
  "nimbro_api_interfaces::srv",  // message namespace
  "CompletionsSetTools_Response",  // message name
  2,  // number of fields
  sizeof(nimbro_api_interfaces::srv::CompletionsSetTools_Response),
  CompletionsSetTools_Response_message_member_array,  // message members
  CompletionsSetTools_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CompletionsSetTools_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CompletionsSetTools_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsSetTools_Response_message_members,
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
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsSetTools_Response>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsSetTools_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsSetTools_Response)() {
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsSetTools_Response_message_type_support_handle;
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
// #include "nimbro_api_interfaces/srv/detail/completions_set_tools__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CompletionsSetTools_service_members = {
  "nimbro_api_interfaces::srv",  // service namespace
  "CompletionsSetTools",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsSetTools>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CompletionsSetTools_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CompletionsSetTools_service_members,
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
get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsSetTools>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::nimbro_api_interfaces::srv::rosidl_typesupport_introspection_cpp::CompletionsSetTools_service_type_support_handle;
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
        ::nimbro_api_interfaces::srv::CompletionsSetTools_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nimbro_api_interfaces::srv::CompletionsSetTools_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsSetTools)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsSetTools>();
}

#ifdef __cplusplus
}
#endif
