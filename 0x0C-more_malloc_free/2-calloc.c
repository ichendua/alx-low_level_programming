#include <stdlib.h>
/**
 * _calloc - allocates memory for an initialized buffer
 * @nmemb: number of memory bytes
 * @size: number of data type bits
 * Return: return pointer to initialized buffer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
