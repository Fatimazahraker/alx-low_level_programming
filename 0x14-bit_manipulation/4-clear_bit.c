#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > sizeof(*n) * 8)
		return (-1);
	m = 1 << index;
	*n = *n & (~m);
	return (1);
}
