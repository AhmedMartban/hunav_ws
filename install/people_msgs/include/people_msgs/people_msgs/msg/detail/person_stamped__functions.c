// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from people_msgs:msg/PersonStamped.idl
// generated code does not contain a copyright notice
#include "people_msgs/msg/detail/person_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `person`
#include "people_msgs/msg/detail/person__functions.h"

bool
people_msgs__msg__PersonStamped__init(people_msgs__msg__PersonStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    people_msgs__msg__PersonStamped__fini(msg);
    return false;
  }
  // person
  if (!people_msgs__msg__Person__init(&msg->person)) {
    people_msgs__msg__PersonStamped__fini(msg);
    return false;
  }
  return true;
}

void
people_msgs__msg__PersonStamped__fini(people_msgs__msg__PersonStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // person
  people_msgs__msg__Person__fini(&msg->person);
}

bool
people_msgs__msg__PersonStamped__are_equal(const people_msgs__msg__PersonStamped * lhs, const people_msgs__msg__PersonStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // person
  if (!people_msgs__msg__Person__are_equal(
      &(lhs->person), &(rhs->person)))
  {
    return false;
  }
  return true;
}

bool
people_msgs__msg__PersonStamped__copy(
  const people_msgs__msg__PersonStamped * input,
  people_msgs__msg__PersonStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // person
  if (!people_msgs__msg__Person__copy(
      &(input->person), &(output->person)))
  {
    return false;
  }
  return true;
}

people_msgs__msg__PersonStamped *
people_msgs__msg__PersonStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  people_msgs__msg__PersonStamped * msg = (people_msgs__msg__PersonStamped *)allocator.allocate(sizeof(people_msgs__msg__PersonStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(people_msgs__msg__PersonStamped));
  bool success = people_msgs__msg__PersonStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
people_msgs__msg__PersonStamped__destroy(people_msgs__msg__PersonStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    people_msgs__msg__PersonStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
people_msgs__msg__PersonStamped__Sequence__init(people_msgs__msg__PersonStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  people_msgs__msg__PersonStamped * data = NULL;

  if (size) {
    data = (people_msgs__msg__PersonStamped *)allocator.zero_allocate(size, sizeof(people_msgs__msg__PersonStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = people_msgs__msg__PersonStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        people_msgs__msg__PersonStamped__fini(&data[i - 1]);
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
people_msgs__msg__PersonStamped__Sequence__fini(people_msgs__msg__PersonStamped__Sequence * array)
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
      people_msgs__msg__PersonStamped__fini(&array->data[i]);
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

people_msgs__msg__PersonStamped__Sequence *
people_msgs__msg__PersonStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  people_msgs__msg__PersonStamped__Sequence * array = (people_msgs__msg__PersonStamped__Sequence *)allocator.allocate(sizeof(people_msgs__msg__PersonStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = people_msgs__msg__PersonStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
people_msgs__msg__PersonStamped__Sequence__destroy(people_msgs__msg__PersonStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    people_msgs__msg__PersonStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
people_msgs__msg__PersonStamped__Sequence__are_equal(const people_msgs__msg__PersonStamped__Sequence * lhs, const people_msgs__msg__PersonStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!people_msgs__msg__PersonStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
people_msgs__msg__PersonStamped__Sequence__copy(
  const people_msgs__msg__PersonStamped__Sequence * input,
  people_msgs__msg__PersonStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(people_msgs__msg__PersonStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    people_msgs__msg__PersonStamped * data =
      (people_msgs__msg__PersonStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!people_msgs__msg__PersonStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          people_msgs__msg__PersonStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!people_msgs__msg__PersonStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
