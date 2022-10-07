#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an initialized buffer
 * @mem: number of data
 * @nmemb: number of memory bytes
 * @size: number of data type bits
 * Return: return pointer to initialized buffer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	mem(p, 0, size * nnemb);
	return (p);
}
char mem(char *s, char b, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		s[i] = b;
	return (s);
}
