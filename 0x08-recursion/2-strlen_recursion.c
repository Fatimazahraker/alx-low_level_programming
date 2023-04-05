#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - length of a string
 * @s: string
 * Return: return length of a string
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s != '\0')
	{
	
		l = 1 + _strlen_recursion(s + 1);
	}
	
	return (l);
}
