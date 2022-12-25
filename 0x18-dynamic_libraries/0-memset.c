#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
