#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: first string 
 * @s2: second string
 * @n number of bytes
 * Return: null or string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1, i, size2, k, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);

	if (n >= size2)
		len = size2;
	else
		len = n;
	ptr = (char *)malloc(sizeof(char) * (size1 + len + 1));
		if (ptr == NULL)
			return (NULL);
	for (i = 0; i < size1; i++)
			ptr[i] = s1[i];
	for (k = 0; k < len; k++)
	{
		ptr[i] = s2[k];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
