// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "nimbro_api_interfaces/msg/detail/api_usage__struct.h"
#include "nimbro_api_interfaces/msg/detail/api_usage__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nimbro_api_interfaces__msg__api_usage__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("nimbro_api_interfaces.msg._api_usage.ApiUsage", full_classname_dest, 45) == 0);
  }
  nimbro_api_interfaces__msg__ApiUsage * ros_message = _ros_message;
  {  // api_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "api_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->api_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // api_flavor
    PyObject * field = PyObject_GetAttrString(_pymsg, "api_flavor");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->api_flavor, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // model_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->model_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // input_tokens_uncached
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_tokens_uncached");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input_tokens_uncached = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // input_tokens_cached
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_tokens_cached");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input_tokens_cached = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // output_tokens
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_tokens");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->output_tokens = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nimbro_api_interfaces__msg__api_usage__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ApiUsage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nimbro_api_interfaces.msg._api_usage");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ApiUsage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nimbro_api_interfaces__msg__ApiUsage * ros_message = (nimbro_api_interfaces__msg__ApiUsage *)raw_ros_message;
  {  // api_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->api_type.data,
      strlen(ros_message->api_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "api_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // api_flavor
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->api_flavor.data,
      strlen(ros_message->api_flavor.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "api_flavor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->model_name.data,
      strlen(ros_message->model_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_tokens_uncached
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->input_tokens_uncached);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_tokens_uncached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_tokens_cached
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->input_tokens_cached);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_tokens_cached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_tokens
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->output_tokens);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_tokens", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
