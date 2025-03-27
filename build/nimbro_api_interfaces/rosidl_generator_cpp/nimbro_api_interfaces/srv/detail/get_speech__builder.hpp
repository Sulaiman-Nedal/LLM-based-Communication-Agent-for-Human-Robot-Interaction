// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/GetSpeech.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__GET_SPEECH__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__GET_SPEECH__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/get_speech__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSpeech_Request_speed
{
public:
  explicit Init_GetSpeech_Request_speed(::nimbro_api_interfaces::srv::GetSpeech_Request & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::GetSpeech_Request speed(::nimbro_api_interfaces::srv::GetSpeech_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetSpeech_Request msg_;
};

class Init_GetSpeech_Request_voice
{
public:
  explicit Init_GetSpeech_Request_voice(::nimbro_api_interfaces::srv::GetSpeech_Request & msg)
  : msg_(msg)
  {}
  Init_GetSpeech_Request_speed voice(::nimbro_api_interfaces::srv::GetSpeech_Request::_voice_type arg)
  {
    msg_.voice = std::move(arg);
    return Init_GetSpeech_Request_speed(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetSpeech_Request msg_;
};

class Init_GetSpeech_Request_model
{
public:
  explicit Init_GetSpeech_Request_model(::nimbro_api_interfaces::srv::GetSpeech_Request & msg)
  : msg_(msg)
  {}
  Init_GetSpeech_Request_voice model(::nimbro_api_interfaces::srv::GetSpeech_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_GetSpeech_Request_voice(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetSpeech_Request msg_;
};

class Init_GetSpeech_Request_text
{
public:
  Init_GetSpeech_Request_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSpeech_Request_model text(::nimbro_api_interfaces::srv::GetSpeech_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_GetSpeech_Request_model(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetSpeech_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetSpeech_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetSpeech_Request_text();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSpeech_Response_path
{
public:
  explicit Init_GetSpeech_Response_path(::nimbro_api_interfaces::srv::GetSpeech_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::GetSpeech_Response path(::nimbro_api_interfaces::srv::GetSpeech_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetSpeech_Response msg_;
};

class Init_GetSpeech_Response_message
{
public:
  explicit Init_GetSpeech_Response_message(::nimbro_api_interfaces::srv::GetSpeech_Response & msg)
  : msg_(msg)
  {}
  Init_GetSpeech_Response_path message(::nimbro_api_interfaces::srv::GetSpeech_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetSpeech_Response_path(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetSpeech_Response msg_;
};

class Init_GetSpeech_Response_success
{
public:
  Init_GetSpeech_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSpeech_Response_message success(::nimbro_api_interfaces::srv::GetSpeech_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetSpeech_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::GetSpeech_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::GetSpeech_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_GetSpeech_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__GET_SPEECH__BUILDER_HPP_
