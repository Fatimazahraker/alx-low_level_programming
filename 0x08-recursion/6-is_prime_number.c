#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_prime_number - check if a number prime or not
 * @n: number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (i <= sqrt(n))
	{
		if (n % i == 0)
		{ return (0);
		}
		
