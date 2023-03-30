#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: s is the world to be analyzed
 *
 * Return: Always s .
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		if (s[i] == 32 || s[i] == 46 || s[i] == '\t' ||
				 s[i] == '\n' || s[i] == 44 || s[i] == 59 ||
				 s[i] == '!' || s[i] == '?' || s[i] == '(' ||
				 s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}
		return (s);
}
