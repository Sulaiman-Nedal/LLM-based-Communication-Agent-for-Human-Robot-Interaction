// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nimbro_api_interfaces:srv/GetImage.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/get_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `prompt`
// Member `model`
// Member `quality`
// Member `style`
// Member `size`
#include "rosidl_runtime_c/string_functions.h"

bool
nimbro_api_interfaces__srv__GetImage_Request__init(nimbro_api_interfaces__srv__GetImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    nimbro_api_interfaces__srv__GetImage_Request__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    nimbro_api_interfaces__srv__GetImage_Request__fini(msg);
    return false;
  }
  // quality
  if (!rosidl_runtime_c__String__init(&msg->quality)) {
    nimbro_api_interfaces__srv__GetImage_Request__fini(msg);
    return false;
  }
  // style
  if (!rosidl_runtime_c__String__init(&msg->style)) {
    nimbro_api_interfaces__srv__GetImage_Request__fini(msg);
    return false;
  }
  // size
  if (!rosidl_runtime_c__String__init(&msg->size)) {
    nimbro_api_interfaces__srv__GetImage_Request__fini(msg);
    return false;
  }
  return true;
}

void
nimbro_api_interfaces__srv__GetImage_Request__fini(nimbro_api_interfaces__srv__GetImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // quality
  rosidl_runtime_c__String__fini(&msg->quality);
  // style
  rosidl_runtime_c__String__fini(&msg->style);
  // size
  rosidl_runtime_c__String__fini(&msg->size);
}

bool
nimbro_api_interfaces__srv__GetImage_Request__are_equal(const nimbro_api_interfaces__srv__GetImage_Request * lhs, const nimbro_api_interfaces__srv__GetImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt), &(rhs->prompt)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // quality
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->quality), &(rhs->quality)))
  {
    return false;
  }
  // style
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->style), &(rhs->style)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
nimbro_api_interfaces__srv__GetImage_Request__copy(
  const nimbro_api_interfaces__srv__GetImage_Request * input,
  nimbro_api_interfaces__srv__GetImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt), &(output->prompt)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // quality
  if (!rosidl_runtime_c__String__copy(
      &(input->quality), &(output->quality)))
  {
    return false;
  }
  // style
  if (!rosidl_runtime_c__String__copy(
      &(input->style), &(output->style)))
  {
    return false;
  }
  // size
  if (!rosidl_runtime_c__String__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

nimbro_api_interfaces__srv__GetImage_Request *
nimbro_api_interfaces__srv__GetImage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__GetImage_Request * msg = (nimbro_api_interfaces__srv__GetImage_Request *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__GetImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__srv__GetImage_Request));
  bool success = nimbro_api_interfaces__srv__GetImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__srv__GetImage_Request__destroy(nimbro_api_interfaces__srv__GetImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__srv__GetImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__srv__GetImage_Request__Sequence__init(nimbro_api_interfaces__srv__GetImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__GetImage_Request * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__srv__GetImage_Request *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__srv__GetImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__srv__GetImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__srv__GetImage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nimbro_api_interfaces__srv__GetImage_Request__Sequence__fini(nimbro_api_interfaces__srv__GetImage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nimbro_api_interfaces__srv__GetImage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nimbro_api_interfaces__srv__GetImage_Request__Sequence *
nimbro_api_interfaces__srv__GetImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__GetImage_Request__Sequence * array = (nimbro_api_interfaces__srv__GetImage_Request__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__GetImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__srv__GetImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__srv__GetImage_Request__Sequence__destroy(nimbro_api_interfaces__srv__GetImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__srv__GetImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__srv__GetImage_Request__Sequence__are_equal(const nimbro_api_interfaces__srv__GetImage_Request__Sequence * lhs, const nimbro_api_interfaces__srv__GetImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__srv__GetImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__srv__GetImage_Request__Sequence__copy(
  const nimbro_api_interfaces__srv__GetImage_Request__Sequence * input,
  nimbro_api_interfaces__srv__GetImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__srv__GetImage_Request);
    nimbro_api_interfaces__srv__GetImage_Request * data =
      (nimbro_api_interfaces__srv__GetImage_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__srv__GetImage_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__srv__GetImage_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nimbro_api_interfaces__srv__GetImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
nimbro_api_interfaces__srv__GetImage_Response__init(nimbro_api_interfaces__srv__GetImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    nimbro_api_interfaces__srv__GetImage_Response__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    nimbro_api_interfaces__srv__GetImage_Response__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    nimbro_api_interfaces__srv__GetImage_Response__fini(msg);
    return false;
  }
  return true;
}

void
nimbro_api_interfaces__srv__GetImage_Response__fini(nimbro_api_interfaces__srv__GetImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // path
  rosidl_runtime_c__String__fini(&msg->path);
}

bool
nimbro_api_interfaces__srv__GetImage_Response__are_equal(const nimbro_api_interfaces__srv__GetImage_Response * lhs, const nimbro_api_interfaces__srv__GetImage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
nimbro_api_interfaces__srv__GetImage_Response__copy(
  const nimbro_api_interfaces__srv__GetImage_Response * input,
  nimbro_api_interfaces__srv__GetImage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

nimbro_api_interfaces__srv__GetImage_Response *
nimbro_api_interfaces__srv__GetImage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__GetImage_Response * msg = (nimbro_api_interfaces__srv__GetImage_Response *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__GetImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__srv__GetImage_Response));
  bool success = nimbro_api_interfaces__srv__GetImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__srv__GetImage_Response__destroy(nimbro_api_interfaces__srv__GetImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__srv__GetImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__srv__GetImage_Response__Sequence__init(nimbro_api_interfaces__srv__GetImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__GetImage_Response * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__srv__GetImage_Response *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__srv__GetImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__srv__GetImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__srv__GetImage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nimbro_api_interfaces__srv__GetImage_Response__Sequence__fini(nimbro_api_interfaces__srv__GetImage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nimbro_api_interfaces__srv__GetImage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nimbro_api_interfaces__srv__GetImage_Response__Sequence *
nimbro_api_interfaces__srv__GetImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__GetImage_Response__Sequence * array = (nimbro_api_interfaces__srv__GetImage_Response__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__GetImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__srv__GetImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__srv__GetImage_Response__Sequence__destroy(nimbro_api_interfaces__srv__GetImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__srv__GetImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__srv__GetImage_Response__Sequence__are_equal(const nimbro_api_interfaces__srv__GetImage_Response__Sequence * lhs, const nimbro_api_interfaces__srv__GetImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__srv__GetImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__srv__GetImage_Response__Sequence__copy(
  const nimbro_api_interfaces__srv__GetImage_Response__Sequence * input,
  nimbro_api_interfaces__srv__GetImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__srv__GetImage_Response);
    nimbro_api_interfaces__srv__GetImage_Response * data =
      (nimbro_api_interfaces__srv__GetImage_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__srv__GetImage_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__srv__GetImage_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nimbro_api_interfaces__srv__GetImage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
