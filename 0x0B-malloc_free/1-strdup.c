#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocated space in memory, contains a copy of the string
 * @str: string
 * return: poiter to string or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{
	
	ptr = malloc(sizeof(*str) * size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; str[i] == '\0'; i++)
	{
		ptr[i] = str[i];
	}
	}
	}
	return(ptr);
}
		
