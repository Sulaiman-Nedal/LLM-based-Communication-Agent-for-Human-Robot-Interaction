// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/completions_prompt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nimbro_api_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.h"
#include "nimbro_api_interfaces/srv/detail/completions_prompt__functions.h"
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

#include "rosidl_runtime_c/string.h"  // completions_id, response_type, role, text, tool_response_id
#include "rosidl_runtime_c/string_functions.h"  // completions_id, response_type, role, text, tool_response_id

// forward declare type support functions


using _CompletionsPrompt_Request__ros_msg_type = nimbro_api_interfaces__srv__CompletionsPrompt_Request;

static bool _CompletionsPrompt_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CompletionsPrompt_Request__ros_msg_type * ros_message = static_cast<const _CompletionsPrompt_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: role
  {
    const rosidl_runtime_c__String * str = &ros_message->role;
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

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
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

  // Field name: reset_context
  {
    cdr << (ros_message->reset_context ? true : false);
  }

  // Field name: tool_response_id
  {
    const rosidl_runtime_c__String * str = &ros_message->tool_response_id;
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

  // Field name: response_type
  {
    const rosidl_runtime_c__String * str = &ros_message->response_type;
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

static bool _CompletionsPrompt_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CompletionsPrompt_Request__ros_msg_type * ros_message = static_cast<_CompletionsPrompt_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: role
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->role.data) {
      rosidl_runtime_c__String__init(&ros_message->role);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->role,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'role'\n");
      return false;
    }
  }

  // Field name: text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text.data) {
      rosidl_runtime_c__String__init(&ros_message->text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text'\n");
      return false;
    }
  }

  // Field name: reset_context
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_context = tmp ? true : false;
  }

  // Field name: tool_response_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tool_response_id.data) {
      rosidl_runtime_c__String__init(&ros_message->tool_response_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tool_response_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tool_response_id'\n");
      return false;
    }
  }

  // Field name: response_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->response_type.data) {
      rosidl_runtime_c__String__init(&ros_message->response_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->response_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'response_type'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CompletionsPrompt_Request__ros_msg_type * ros_message = static_cast<const _CompletionsPrompt_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name role
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->role.size + 1);
  // field.name text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);
  // field.name reset_context
  {
    size_t item_size = sizeof(ros_message->reset_context);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_response_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tool_response_id.size + 1);
  // field.name response_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->response_type.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CompletionsPrompt_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Request(
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
  // member: role
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: text
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: reset_context
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tool_response_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: response_type
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

static size_t _CompletionsPrompt_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CompletionsPrompt_Request = {
  "nimbro_api_interfaces::srv",
  "CompletionsPrompt_Request",
  _CompletionsPrompt_Request__cdr_serialize,
  _CompletionsPrompt_Request__cdr_deserialize,
  _CompletionsPrompt_Request__get_serialized_size,
  _CompletionsPrompt_Request__max_serialized_size
};

static rosidl_message_type_support_t _CompletionsPrompt_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CompletionsPrompt_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsPrompt_Request)() {
  return &_CompletionsPrompt_Request__type_support;
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
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.h"
// already included above
// #include "nimbro_api_interfaces/srv/detail/completions_prompt__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // message, text, tool_calls
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message, text, tool_calls

// forward declare type support functions


using _CompletionsPrompt_Response__ros_msg_type = nimbro_api_interfaces__srv__CompletionsPrompt_Response;

static bool _CompletionsPrompt_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CompletionsPrompt_Response__ros_msg_type * ros_message = static_cast<const _CompletionsPrompt_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
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

  // Field name: tool_calls
  {
    size_t size = ros_message->tool_calls.size;
    auto array_ptr = ros_message->tool_calls.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _CompletionsPrompt_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CompletionsPrompt_Response__ros_msg_type * ros_message = static_cast<_CompletionsPrompt_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text.data) {
      rosidl_runtime_c__String__init(&ros_message->text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text'\n");
      return false;
    }
  }

  // Field name: tool_calls
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tool_calls.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->tool_calls);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->tool_calls, size)) {
      return "failed to create array for field 'tool_calls'";
    }
    auto array_ptr = ros_message->tool_calls.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'tool_calls'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t get_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CompletionsPrompt_Response__ros_msg_type * ros_message = static_cast<const _CompletionsPrompt_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);
  // field.name tool_calls
  {
    size_t array_size = ros_message->tool_calls.size;
    auto array_ptr = ros_message->tool_calls.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CompletionsPrompt_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nimbro_api_interfaces
size_t max_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Response(
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
  // member: text
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: tool_calls
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CompletionsPrompt_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nimbro_api_interfaces__srv__CompletionsPrompt_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CompletionsPrompt_Response = {
  "nimbro_api_interfaces::srv",
  "CompletionsPrompt_Response",
  _CompletionsPrompt_Response__cdr_serialize,
  _CompletionsPrompt_Response__cdr_deserialize,
  _CompletionsPrompt_Response__get_serialized_size,
  _CompletionsPrompt_Response__max_serialized_size
};

static rosidl_message_type_support_t _CompletionsPrompt_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CompletionsPrompt_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsPrompt_Response)() {
  return &_CompletionsPrompt_Response__type_support;
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
#include "nimbro_api_interfaces/srv/completions_prompt.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CompletionsPrompt__callbacks = {
  "nimbro_api_interfaces::srv",
  "CompletionsPrompt",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsPrompt_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsPrompt_Response)(),
};

static rosidl_service_type_support_t CompletionsPrompt__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CompletionsPrompt__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nimbro_api_interfaces, srv, CompletionsPrompt)() {
  return &CompletionsPrompt__handle;
}

#if defined(__cplusplus)
}
#endif
