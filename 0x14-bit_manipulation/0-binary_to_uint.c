#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: 0 or number converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		n <<= 1;
		n += b[i] - '0';
		i++;
	}
	return (n);

}
