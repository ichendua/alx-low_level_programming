#include "main.h"

/**
 * _strncat - function that copies two strings using at most
 * @dest: The buffer string to store the string copy
 * @src: The string source
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
       	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}