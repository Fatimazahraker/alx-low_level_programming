#include "main.h"

/**
 * get_bit - return the value fo a bit given
 * @n: number
 * @index: index given
 * Return: the value of the bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	n >>= index;
	return (n & 1);
}
