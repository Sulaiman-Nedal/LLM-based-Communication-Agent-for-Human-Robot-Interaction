// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/msg/detail/api_usage__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nimbro_api_interfaces/msg/detail/api_usage__struct.h"
#include "nimbro_api_interfaces/msg/detail/api_usage__functions.h"
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

#include "rosidl_runtime_c/string.h"  // api_flavor, api_type, model_name
#include "rosidl_runtime_c/string_functions.h"  // api_flavor, api_type, model_name

// forward declare type support functions


using _ApiUsage__ros_msg_type = nimbro_api_interfaces__msg__ApiUsage;

static bool _ApiUsage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ApiUsage__ros_msg_type * ros_message = static_cast<const _ApiUsage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: api_flavor
  {
    const rosidl_runtime_c__String * str = &ros_message->api_flavor;
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

  // Field name: model_name
  {
    const rosidl_runtime_c__String * str = &ros_message->model_name;
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

  // Field name: input_tokens_uncached
  {
    cdr << ros_message->input_tokens_uncached;
  }

  // Field name: input_tokens_cached
  {
    cdr << ros_message->input_tokens_cached;
  }

  // Field name: output_tokens
  {
    cdr << ros_message->output_tokens;
  }

  return true;
}

static bool _ApiUsage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ApiUsage__ros_msg_type * ros_message = static_cast<_ApiUsage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: api_flavor
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->api_flavor.data) {
      rosidl_runtime_c__String__init(&ros_message->api_flavor);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->api_flavor,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'api_flavor'\n");
      return false;
    }
  }

  // Field name: model_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_name.data) {
      rosidl_runtime_c__String__init(&ros_message->model_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_name'\n");
      return false;
    }
  }

  // Field name: input_tokens_uncached
  {
    cdr >> ros_message->input_tokens_uncached;
  }

  // Field name: input_tokens_cached
  {
    cdr >> ros_message->input_tokens_cached;
  }

  // Field name: output_tokens
  {
    cdr >> ros_message->output_tokens;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__msg__ApiUsage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ApiUsage__ros_msg_type * ros_message = static_cast<const _ApiUsage__ros_msg_type *>(untyped_ros_message);
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
  // field.name api_flavor
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->api_flavor.size + 1);
  // field.name model_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_name.size + 1);
  // field.name input_tokens_uncached
  {
    size_t item_size = sizeof(ros_message->input_tokens_uncached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_tokens_cached
  {
    size_t item_size = sizeof(ros_message->input_tokens_cached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_tokens
  {
    size_t item_size = sizeof(ros_message->output_tokens);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ApiUsage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__msg__ApiUsage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__msg__ApiUsage(
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
  // member: api_flavor
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: model_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: input_tokens_uncached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: input_tokens_cached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: output_tokens
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ApiUsage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__msg__ApiUsage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ApiUsage = {
  "nimbro_api_interfaces::msg",
  "ApiUsage",
  _ApiUsage__cdr_serialize,
  _ApiUsage__cdr_deserialize,
  _ApiUsage__get_serialized_size,
  _ApiUsage__max_serialized_size
};

static rosidl_message_type_support_t _ApiUsage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ApiUsage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, msg, ApiUsage)() {
  return &_ApiUsage__type_support;
}

#if defined(__cplusplus)
}
#endif
