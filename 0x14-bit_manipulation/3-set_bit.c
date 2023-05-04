#include "main.h"

/**
 * set_bit -that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long) * 8))
		return (-1);

	m = 1 << index;
	*n = *n | m;
	return (1);
}
