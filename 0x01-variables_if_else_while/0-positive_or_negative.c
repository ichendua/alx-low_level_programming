#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print if number is positive at the entry point
*
* Description; using the main function
* this points "programming is positive, zero or negative
* Return: 0
*/
int n;

srand (time(0));
n = rand() - RAND_MAX / 2
  /* your code enters here */
if (n > 0)
{
  printf("%d is positive\n", n);
}
else if (n == 0)
{
  printf("% is zero\n", n);
}
else if (n < 0)
{
  printf("%d is negative\n", n);
}
return (0);
