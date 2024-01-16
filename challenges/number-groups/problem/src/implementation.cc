/*
* minimum_group_number
* maximum_group_number
* read_group_number
*/
#include "constraints.hh"

/*
* std::endl
* std::cout
* std::cin
*/
#include <iostream>

/*
* std::format
*/
#include <format>

/*
* assert()
*/
#include <cassert>

/**
 * Read group number from standard-input
 * and return the same
*/
unsigned
int
read_group_number()
{
    std::cout<<
    std::format(
      "Enter group number: "
    )<<std::endl;
    unsigned int group_number {};
    std::cin>>group_number;
    assert(
      group_number >= minimum_group_number
      &&
      group_number <= maximum_group_number
    );
  return group_number;
}
/**
 * Sum of elements in a group
*/
int unsigned
sum_of_elements_in_a_group( unsigned int group_number )
{
    start_element = 2 * group_number
    for ( 
      auto iteration_count {1U};
      iteration_count <= group_number;
      iteration_count += 1
    )
    {
      sum_of_elements += ( 2 * ) - 1;
    }
  return sum_of_elements;
}