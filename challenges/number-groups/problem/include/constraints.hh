#ifndef _constraints_
#define _constraints_
/**
 * Minimum group number
*/
int unsigned constexpr minimum_group_number {1};
/**
 * Maximum group number
*/
unsigned int constexpr maximum_group_number {10'000'000};
/**
 * Sum of elements in a group
*/
int unsigned
sum_of_elements_in_a_group( unsigned int group_number );
/**
 * Populate group
*/
void
populate_group( int array , int array_size );
/**
 * Read group number from standard-input
 * and return the same
*/
unsigned
int
read_group_number();
#endif // _constraints_