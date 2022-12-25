#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
