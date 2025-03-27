// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nimbro_api_interfaces:srv/CompletionsManage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nimbro_api_interfaces/srv/detail/completions_manage__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CompletionsManage_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CompletionsManage_Request_type_support_ids_t;

static const _CompletionsManage_Request_type_support_ids_t _CompletionsManage_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CompletionsManage_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CompletionsManage_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CompletionsManage_Request_type_support_symbol_names_t _CompletionsManage_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, CompletionsManage_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsManage_Request)),
  }
};

typedef struct _CompletionsManage_Request_type_support_data_t
{
  void * data[2];
} _CompletionsManage_Request_type_support_data_t;

static _CompletionsManage_Request_type_support_data_t _CompletionsManage_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CompletionsManage_Request_message_typesupport_map = {
  2,
  "nimbro_api_interfaces",
  &_CompletionsManage_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CompletionsManage_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CompletionsManage_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CompletionsManage_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CompletionsManage_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsManage_Request>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_cpp::CompletionsManage_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nimbro_api_interfaces, srv, CompletionsManage_Request)() {
  return get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsManage_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_manage__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CompletionsManage_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CompletionsManage_Response_type_support_ids_t;

static const _CompletionsManage_Response_type_support_ids_t _CompletionsManage_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CompletionsManage_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CompletionsManage_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CompletionsManage_Response_type_support_symbol_names_t _CompletionsManage_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, CompletionsManage_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsManage_Response)),
  }
};

typedef struct _CompletionsManage_Response_type_support_data_t
{
  void * data[2];
} _CompletionsManage_Response_type_support_data_t;

static _CompletionsManage_Response_type_support_data_t _CompletionsManage_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CompletionsManage_Response_message_typesupport_map = {
  2,
  "nimbro_api_interfaces",
  &_CompletionsManage_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CompletionsManage_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CompletionsManage_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CompletionsManage_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CompletionsManage_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsManage_Response>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_cpp::CompletionsManage_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nimbro_api_interfaces, srv, CompletionsManage_Response)() {
  return get_message_type_support_handle<nimbro_api_interfaces::srv::CompletionsManage_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_manage__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nimbro_api_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CompletionsManage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CompletionsManage_type_support_ids_t;

static const _CompletionsManage_type_support_ids_t _CompletionsManage_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CompletionsManage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CompletionsManage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CompletionsManage_type_support_symbol_names_t _CompletionsManage_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nimbro_api_interfaces, srv, CompletionsManage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nimbro_api_interfaces, srv, CompletionsManage)),
  }
};

typedef struct _CompletionsManage_type_support_data_t
{
  void * data[2];
} _CompletionsManage_type_support_data_t;

static _CompletionsManage_type_support_data_t _CompletionsManage_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CompletionsManage_service_typesupport_map = {
  2,
  "nimbro_api_interfaces",
  &_CompletionsManage_service_typesupport_ids.typesupport_identifier[0],
  &_CompletionsManage_service_typesupport_symbol_names.symbol_name[0],
  &_CompletionsManage_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CompletionsManage_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CompletionsManage_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace nimbro_api_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsManage>()
{
  return &::nimbro_api_interfaces::srv::rosidl_typesupport_cpp::CompletionsManage_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, nimbro_api_interfaces, srv, CompletionsManage)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<nimbro_api_interfaces::srv::CompletionsManage>();
}

#ifdef __cplusplus
}
#endif
