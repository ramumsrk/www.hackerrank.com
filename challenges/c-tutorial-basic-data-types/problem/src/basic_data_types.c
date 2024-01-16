// printf()
#include <stdio.h>

// EXIT_SUCCESS
#include <stdlib.h>

/*
* C program execution starts
* from main() function
*/
int
main()
{
    printf(
      "%d\n",
      3
    );
    printf(
      "%ld\n",
      12345678912345
    );
    printf(
      "%c\n",
      'a'
    );
    printf(
      "%f\n",
      334.23F
    );
    printf(
      "%lf\n",
      14049.30493
    );
  /*
  * Return EXIT_SUCCESS to
  * underlying operating-system
  */
  return EXIT_SUCCESS;
}