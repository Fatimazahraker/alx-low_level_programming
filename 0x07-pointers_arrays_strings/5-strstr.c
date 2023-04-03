#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: first string
 * @needle: second string
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				j++;
				break;
			}
			else	
			{
				j = 0;
				break;
			}
		}

	}

	return (NULL);
}

