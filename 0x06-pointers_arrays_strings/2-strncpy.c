#include "main.h"
#include <stdio.h>

/**
 * _strncpy -  function that copies a string.
 * @dest: first string
 * @src : second string
 * @n: number of bytes
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
