#include "main.h"
#include <stdio.h>

/**
 *_strchr - fuction that locates a charracter in a string
 *@s : string
 * @c : character
 * Return: return a poiter to the first occurance of c or null
 */

char *_strchr(char *s, char c)
{
	int i;


	for (i = 0; s[i] != c; i++)
	{
	}
	if (i != 0)
	{
		return (s + i);
	}
	return ('\0');
}
