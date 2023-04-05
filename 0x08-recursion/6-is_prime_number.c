#include "main.h"
#include <stdio.h>

/**
 * is_divisible - check if d divive n;
 * @a: first parameter
 * @d: second parameter
 * Return: return 0 if a divisible by b , if not 1
 */
int is_divisible(int a, int d)
{

	if (a == d)
		return (1);

	else if (a % d != 0)
		return (is_divisible(a, d + 1));
	else
		return (0);
}
/**
 * is_prime_number - check if a number prime or not
 * @n: number
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_divisible(n, 2));
}
