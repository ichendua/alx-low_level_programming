#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: array a
 * @n: an element of an array
 */
void reverse_array(int *a, int n)
{
	int temp;
	while (*a < n)
	{
		temp = arr[*a];
		arr[*a] = arr[n];
		arr[n] = temp;
		*a++;
		n--;
	}
}
