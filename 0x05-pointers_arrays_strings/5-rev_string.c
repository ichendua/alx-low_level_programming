#include "main.h"

/**
 *  rev_string - reverse the string in the reversed order.
 *  @*s: pointer to string
 *  @s: the actual parameter
 *
 *  Description: change its value
 *  Return: 0 Always
 */

void rev_string(char *s)
{
	int len;
	int i;

	len = 0
		for(i = 0; *(s + 1) != '\0'; i++)
		{
			len++;
		}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}													}
