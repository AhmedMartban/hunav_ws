// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from people_msgs:msg/PositionMeasurement.idl
// generated code does not contain a copyright notice
#include "people_msgs/msg/detail/position_measurement__rosidl_typesupport_fastrtps_cpp.hpp"
#include "people_msgs/msg/detail/position_measurement__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace people_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_msgs
cdr_serialize(
  const people_msgs::msg::PositionMeasurement & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: name
  cdr << ros_message.name;
  // Member: object_id
  cdr << ros_message.object_id;
  // Member: pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pos,
    cdr);
  // Member: reliability
  cdr << ros_message.reliability;
  // Member: covariance
  {
    cdr << ros_message.covariance;
  }
  // Member: initialization
  cdr << ros_message.initialization;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  people_msgs::msg::PositionMeasurement & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: name
  cdr >> ros_message.name;

  // Member: object_id
  cdr >> ros_message.object_id;

  // Member: pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pos);

  // Member: reliability
  cdr >> ros_message.reliability;

  // Member: covariance
  {
    cdr >> ros_message.covariance;
  }

  // Member: initialization
  cdr >> ros_message.initialization;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_msgs
get_serialized_size(
  const people_msgs::msg::PositionMeasurement & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.object_id.size() + 1);
  // Member: pos

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pos, current_alignment);
  // Member: reliability
  {
    size_t item_size = sizeof(ros_message.reliability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: covariance
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initialization
  {
    size_t item_size = sizeof(ros_message.initialization);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_msgs
max_serialized_size_PositionMeasurement(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: object_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: pos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: reliability
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: covariance
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initialization
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = people_msgs::msg::PositionMeasurement;
    is_plain =
      (
      offsetof(DataType, initialization) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PositionMeasurement__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const people_msgs::msg::PositionMeasurement *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PositionMeasurement__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<people_msgs::msg::PositionMeasurement *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PositionMeasurement__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const people_msgs::msg::PositionMeasurement *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PositionMeasurement__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PositionMeasurement(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PositionMeasurement__callbacks = {
  "people_msgs::msg",
  "PositionMeasurement",
  _PositionMeasurement__cdr_serialize,
  _PositionMeasurement__cdr_deserialize,
  _PositionMeasurement__get_serialized_size,
  _PositionMeasurement__max_serialized_size
};

static rosidl_message_type_support_t _PositionMeasurement__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PositionMeasurement__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace people_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_people_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<people_msgs::msg::PositionMeasurement>()
{
  return &people_msgs::msg::typesupport_fastrtps_cpp::_PositionMeasurement__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, people_msgs, msg, PositionMeasurement)() {
  return &people_msgs::msg::typesupport_fastrtps_cpp::_PositionMeasurement__handle;
}

#ifdef __cplusplus
}
#endif
