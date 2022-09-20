#include "main.h"

/**
 * swap_int - swaps two integers value
 * @a: first integer
 * @b: second integer
 * Return: returns nothing
 */

void swap_int(int *a, int *b);
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
