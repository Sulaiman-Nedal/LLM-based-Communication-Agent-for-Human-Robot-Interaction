// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nimbro_api_interfaces:srv/TriggerFeedback.idl
// generated code does not contain a copyright notice
#include "nimbro_api_interfaces/srv/detail/trigger_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
nimbro_api_interfaces__srv__TriggerFeedback_Request__init(nimbro_api_interfaces__srv__TriggerFeedback_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
nimbro_api_interfaces__srv__TriggerFeedback_Request__fini(nimbro_api_interfaces__srv__TriggerFeedback_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Request__are_equal(const nimbro_api_interfaces__srv__TriggerFeedback_Request * lhs, const nimbro_api_interfaces__srv__TriggerFeedback_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Request__copy(
  const nimbro_api_interfaces__srv__TriggerFeedback_Request * input,
  nimbro_api_interfaces__srv__TriggerFeedback_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

nimbro_api_interfaces__srv__TriggerFeedback_Request *
nimbro_api_interfaces__srv__TriggerFeedback_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__TriggerFeedback_Request * msg = (nimbro_api_interfaces__srv__TriggerFeedback_Request *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Request));
  bool success = nimbro_api_interfaces__srv__TriggerFeedback_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__srv__TriggerFeedback_Request__destroy(nimbro_api_interfaces__srv__TriggerFeedback_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__srv__TriggerFeedback_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__init(nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__TriggerFeedback_Request * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__srv__TriggerFeedback_Request *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__srv__TriggerFeedback_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__srv__TriggerFeedback_Request__fini(&data[i - 1]);
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
nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__fini(nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * array)
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
      nimbro_api_interfaces__srv__TriggerFeedback_Request__fini(&array->data[i]);
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

nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence *
nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * array = (nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__destroy(nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__are_equal(const nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * lhs, const nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__srv__TriggerFeedback_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence__copy(
  const nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * input,
  nimbro_api_interfaces__srv__TriggerFeedback_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Request);
    nimbro_api_interfaces__srv__TriggerFeedback_Request * data =
      (nimbro_api_interfaces__srv__TriggerFeedback_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__srv__TriggerFeedback_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__srv__TriggerFeedback_Request__fini(&data[i]);
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
    if (!nimbro_api_interfaces__srv__TriggerFeedback_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
nimbro_api_interfaces__srv__TriggerFeedback_Response__init(nimbro_api_interfaces__srv__TriggerFeedback_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    nimbro_api_interfaces__srv__TriggerFeedback_Response__fini(msg);
    return false;
  }
  return true;
}

void
nimbro_api_interfaces__srv__TriggerFeedback_Response__fini(nimbro_api_interfaces__srv__TriggerFeedback_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Response__are_equal(const nimbro_api_interfaces__srv__TriggerFeedback_Response * lhs, const nimbro_api_interfaces__srv__TriggerFeedback_Response * rhs)
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
  return true;
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Response__copy(
  const nimbro_api_interfaces__srv__TriggerFeedback_Response * input,
  nimbro_api_interfaces__srv__TriggerFeedback_Response * output)
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
  return true;
}

nimbro_api_interfaces__srv__TriggerFeedback_Response *
nimbro_api_interfaces__srv__TriggerFeedback_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__TriggerFeedback_Response * msg = (nimbro_api_interfaces__srv__TriggerFeedback_Response *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Response));
  bool success = nimbro_api_interfaces__srv__TriggerFeedback_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nimbro_api_interfaces__srv__TriggerFeedback_Response__destroy(nimbro_api_interfaces__srv__TriggerFeedback_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nimbro_api_interfaces__srv__TriggerFeedback_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__init(nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__TriggerFeedback_Response * data = NULL;

  if (size) {
    data = (nimbro_api_interfaces__srv__TriggerFeedback_Response *)allocator.zero_allocate(size, sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nimbro_api_interfaces__srv__TriggerFeedback_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nimbro_api_interfaces__srv__TriggerFeedback_Response__fini(&data[i - 1]);
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
nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__fini(nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * array)
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
      nimbro_api_interfaces__srv__TriggerFeedback_Response__fini(&array->data[i]);
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

nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence *
nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * array = (nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence *)allocator.allocate(sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__destroy(nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__are_equal(const nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * lhs, const nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nimbro_api_interfaces__srv__TriggerFeedback_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence__copy(
  const nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * input,
  nimbro_api_interfaces__srv__TriggerFeedback_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nimbro_api_interfaces__srv__TriggerFeedback_Response);
    nimbro_api_interfaces__srv__TriggerFeedback_Response * data =
      (nimbro_api_interfaces__srv__TriggerFeedback_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nimbro_api_interfaces__srv__TriggerFeedback_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nimbro_api_interfaces__srv__TriggerFeedback_Response__fini(&data[i]);
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
    if (!nimbro_api_interfaces__srv__TriggerFeedback_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
