#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	char *ptr = malloc((size1 + size2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{	
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

