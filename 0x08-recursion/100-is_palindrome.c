#include "main.h"
#include <stdio.h>
int identity(char *s1, int k, int size);
int length(char *str);

/**
 * is_palindrome - ckeck if a string is a palindrome
 * @s: string
 * Return: return 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (identity(s, 0, length(s)));
}

/**
 * length - return the length of string
 * @str: string
 * Return: the lengthof string
 */
int length(char *str)
{
	if (*str != '\0')
	{
		return (1 + length(str + 1));
	}
	return (0);
}
/**
 * identity - check the identity of palindrome
 * @s1: string to check
 * @k: iterator
 * @size: the lenght of s1
 * Return: return1 if palindrome, 0 if not
 */
int identity(char *s1, int k, int size)
{
	if (*(s1 + k) != *(s1 + size - 1))
		return (0);
	if (k >= size)
		return (1);
	return (identity(s1, k + 1, size - 1));
}
