#include "main.h"

/**
 * flip_bits - returns number of bitsneed to flip from one number to anothe
 * @n: number 1
 * @m: number 2
 * Return: an integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 && m != 0)
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
