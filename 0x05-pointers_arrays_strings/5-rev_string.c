#include "main.h"
/**
 *  rev_string - reverse the string in the reversed order.
 *  @s: pointer to string
 *
 *  Return: void.
 */
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] i= '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;
	while (k > j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--i
	}
}													}
