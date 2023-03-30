#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337.
 * @s: first string
 * Return: return a string
 */
char *leet(char *s)
{
	int i, j;
	char M[] = "AEOTLaeotl";
	char N[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == M[j])
			{
				s[i] = N[j];
			}
		}
	}
	return (s);
}
