// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nimbro_api_interfaces:srv/GetUsage.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/get_usage__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nimbro_api_interfaces/srv/detail/get_usage__struct.h"
#include "nimbro_api_interfaces/srv/detail/get_usage__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // api_type, stamp_end, stamp_start
#include "rosidl_runtime_c/string_functions.h"  // api_type, stamp_end, stamp_start

// forward declare type support functions


using _GetUsage_Request__ros_msg_type = nimbro_api_interfaces__srv__GetUsage_Request;

static bool _GetUsage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetUsage_Request__ros_msg_type * ros_message = static_cast<const _GetUsage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: api_type
  {
    const rosidl_runtime_c__String * str = &ros_message->api_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stamp_start
  {
    const rosidl_runtime_c__String * str = &ros_message->stamp_start;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stamp_end
  {
    const rosidl_runtime_c__String * str = &ros_message->stamp_end;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetUsage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetUsage_Request__ros_msg_type * ros_message = static_cast<_GetUsage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: api_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->api_type.data) {
      rosidl_runtime_c__String__init(&ros_message->api_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->api_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'api_type'\n");
      return false;
    }
  }

  // Field name: stamp_start
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->stamp_start.data) {
      rosidl_runtime_c__String__init(&ros_message->stamp_start);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->stamp_start,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'stamp_start'\n");
      return false;
    }
  }

  // Field name: stamp_end
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->stamp_end.data) {
      rosidl_runtime_c__String__init(&ros_message->stamp_end);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->stamp_end,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'stamp_end'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__GetUsage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetUsage_Request__ros_msg_type * ros_message = static_cast<const _GetUsage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name api_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->api_type.size + 1);
  // field.name stamp_start
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->stamp_start.size + 1);
  // field.name stamp_end
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->stamp_end.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetUsage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__GetUsage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__GetUsage_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: api_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stamp_start
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stamp_end
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetUsage_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__GetUsage_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetUsage_Request = {
  "nimbro_api_interfaces::srv",
  "GetUsage_Request",
  _GetUsage_Request__cdr_serialize,
  _GetUsage_Request__cdr_deserialize,
  _GetUsage_Request__get_serialized_size,
  _GetUsage_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetUsage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetUsage_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetUsage_Request)() {
  return &_GetUsage_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_usage__struct.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/get_usage__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // message, usage
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message, usage

// forward declare type support functions


using _GetUsage_Response__ros_msg_type = nimbro_api_interfaces__srv__GetUsage_Response;

static bool _GetUsage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetUsage_Response__ros_msg_type * ros_message = static_cast<const _GetUsage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: usage
  {
    const rosidl_runtime_c__String * str = &ros_message->usage;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetUsage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetUsage_Response__ros_msg_type * ros_message = static_cast<_GetUsage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: usage
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->usage.data) {
      rosidl_runtime_c__String__init(&ros_message->usage);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->usage,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'usage'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__GetUsage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetUsage_Response__ros_msg_type * ros_message = static_cast<const _GetUsage_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name usage
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->usage.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetUsage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__GetUsage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__GetUsage_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: usage
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetUsage_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__GetUsage_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetUsage_Response = {
  "nimbro_api_interfaces::srv",
  "GetUsage_Response",
  _GetUsage_Response__cdr_serialize,
  _GetUsage_Response__cdr_deserialize,
  _GetUsage_Response__get_serialized_size,
  _GetUsage_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetUsage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetUsage_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetUsage_Response)() {
  return &_GetUsage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nimbro_api_interfaces/srv/get_usage.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetUsage__callbacks = {
  "nimbro_api_interfaces::srv",
  "GetUsage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetUsage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetUsage_Response)(),
};

static rosidl_service_type_support_t GetUsage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetUsage__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, GetUsage)() {
  return &GetUsage__handle;
}

#if defined(__cplusplus)
}
#endif
