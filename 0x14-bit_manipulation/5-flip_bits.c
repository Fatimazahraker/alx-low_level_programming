#include "main.h"

/**
 * flip_bits - returns number of bitsneed to flip from one number to anothe
 * @n: number 1
 * @m: number 2
 * Return: an integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int size = sizeof(unsigned long int) * 8;

	for (i = 0; i < size; i++)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
