// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from people_msgs:msg/PositionMeasurementArray.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__TRAITS_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "people_msgs/msg/detail/position_measurement_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'people'
#include "people_msgs/msg/detail/position_measurement__traits.hpp"

namespace people_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionMeasurementArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: people
  {
    if (msg.people.size() == 0) {
      out << "people: []";
    } else {
      out << "people: [";
      size_t pending_items = msg.people.size();
      for (auto item : msg.people) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cooccurrence
  {
    if (msg.cooccurrence.size() == 0) {
      out << "cooccurrence: []";
    } else {
      out << "cooccurrence: [";
      size_t pending_items = msg.cooccurrence.size();
      for (auto item : msg.cooccurrence) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionMeasurementArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: people
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.people.size() == 0) {
      out << "people: []\n";
    } else {
      out << "people:\n";
      for (auto item : msg.people) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cooccurrence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cooccurrence.size() == 0) {
      out << "cooccurrence: []\n";
    } else {
      out << "cooccurrence:\n";
      for (auto item : msg.cooccurrence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionMeasurementArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace people_msgs

namespace rosidl_generator_traits
{

[[deprecated("use people_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const people_msgs::msg::PositionMeasurementArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  people_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use people_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const people_msgs::msg::PositionMeasurementArray & msg)
{
  return people_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<people_msgs::msg::PositionMeasurementArray>()
{
  return "people_msgs::msg::PositionMeasurementArray";
}

template<>
inline const char * name<people_msgs::msg::PositionMeasurementArray>()
{
  return "people_msgs/msg/PositionMeasurementArray";
}

template<>
struct has_fixed_size<people_msgs::msg::PositionMeasurementArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<people_msgs::msg::PositionMeasurementArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<people_msgs::msg::PositionMeasurementArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEOPLE_MSGS__MSG__DETAIL__POSITION_MEASUREMENT_ARRAY__TRAITS_HPP_
