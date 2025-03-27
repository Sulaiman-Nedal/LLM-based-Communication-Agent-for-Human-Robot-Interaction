// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nimbro_api_interfaces:srv/CompletionsRemoveContext.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/completions_remove_context__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nimbro_api_interfaces/srv/detail/completions_remove_context__struct.h"
#include "nimbro_api_interfaces/srv/detail/completions_remove_context__functions.h"
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

#include "rosidl_runtime_c/string.h"  // completions_id
#include "rosidl_runtime_c/string_functions.h"  // completions_id

// forward declare type support functions


using _CompletionsRemoveContext_Request__ros_msg_type = nimbro_api_interfaces__srv__CompletionsRemoveContext_Request;

static bool _CompletionsRemoveContext_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CompletionsRemoveContext_Request__ros_msg_type * ros_message = static_cast<const _CompletionsRemoveContext_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: completions_id
  {
    const rosidl_runtime_c__String * str = &ros_message->completions_id;
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

  // Field name: remove_all
  {
    cdr << (ros_message->remove_all ? true : false);
  }

  // Field name: indexing_last_to_first
  {
    cdr << (ros_message->indexing_last_to_first ? true : false);
  }

  // Field name: index
  {
    cdr << ros_message->index;
  }

  return true;
}

static bool _CompletionsRemoveContext_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CompletionsRemoveContext_Request__ros_msg_type * ros_message = static_cast<_CompletionsRemoveContext_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: completions_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->completions_id.data) {
      rosidl_runtime_c__String__init(&ros_message->completions_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->completions_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'completions_id'\n");
      return false;
    }
  }

  // Field name: remove_all
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->remove_all = tmp ? true : false;
  }

  // Field name: indexing_last_to_first
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->indexing_last_to_first = tmp ? true : false;
  }

  // Field name: index
  {
    cdr >> ros_message->index;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CompletionsRemoveContext_Request__ros_msg_type * ros_message = static_cast<const _CompletionsRemoveContext_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name completions_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->completions_id.size + 1);
  // field.name remove_all
  {
    size_t item_size = sizeof(ros_message->remove_all);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indexing_last_to_first
  {
    size_t item_size = sizeof(ros_message->indexing_last_to_first);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CompletionsRemoveContext_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: completions_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: remove_all
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indexing_last_to_first
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CompletionsRemoveContext_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CompletionsRemoveContext_Request = {
  "nimbro_api_interfaces::srv",
  "CompletionsRemoveContext_Request",
  _CompletionsRemoveContext_Request__cdr_serialize,
  _CompletionsRemoveContext_Request__cdr_deserialize,
  _CompletionsRemoveContext_Request__get_serialized_size,
  _CompletionsRemoveContext_Request__max_serialized_size
};

static rosidl_message_type_support_t _CompletionsRemoveContext_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CompletionsRemoveContext_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsRemoveContext_Request)() {
  return &_CompletionsRemoveContext_Request__type_support;
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
// #include "nimbro_api_interfaces/srv/detail/completions_remove_context__struct.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_remove_context__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _CompletionsRemoveContext_Response__ros_msg_type = nimbro_api_interfaces__srv__CompletionsRemoveContext_Response;

static bool _CompletionsRemoveContext_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CompletionsRemoveContext_Response__ros_msg_type * ros_message = static_cast<const _CompletionsRemoveContext_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

static bool _CompletionsRemoveContext_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CompletionsRemoveContext_Response__ros_msg_type * ros_message = static_cast<_CompletionsRemoveContext_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CompletionsRemoveContext_Response__ros_msg_type * ros_message = static_cast<const _CompletionsRemoveContext_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _CompletionsRemoveContext_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _CompletionsRemoveContext_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__CompletionsRemoveContext_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CompletionsRemoveContext_Response = {
  "nimbro_api_interfaces::srv",
  "CompletionsRemoveContext_Response",
  _CompletionsRemoveContext_Response__cdr_serialize,
  _CompletionsRemoveContext_Response__cdr_deserialize,
  _CompletionsRemoveContext_Response__get_serialized_size,
  _CompletionsRemoveContext_Response__max_serialized_size
};

static rosidl_message_type_support_t _CompletionsRemoveContext_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CompletionsRemoveContext_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsRemoveContext_Response)() {
  return &_CompletionsRemoveContext_Response__type_support;
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
#include "nimbro_api_interfaces/srv/completions_remove_context.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CompletionsRemoveContext__callbacks = {
  "nimbro_api_interfaces::srv",
  "CompletionsRemoveContext",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsRemoveContext_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsRemoveContext_Response)(),
};

static rosidl_service_type_support_t CompletionsRemoveContext__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CompletionsRemoveContext__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsRemoveContext)() {
  return &CompletionsRemoveContext__handle;
}

#if defined(__cplusplus)
}
#endif
