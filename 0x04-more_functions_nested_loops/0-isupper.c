#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be tested
 * Return: 1 whether it is, o otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

