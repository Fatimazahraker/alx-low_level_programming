#include "main.h"
#include <stdio.h>

/**
 * square - find square of q
 * @s: dirst parameter
 * @q: second parametr
 * Return: sgrt root or -1
 */
int square(int s, int q)
{
	if (s * s > q)
	{
		return (-1);
	}

	if (s * s == q)
	{
		return (s);
	}
	else
	{
		return (square((s + 1), q));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:integer
 * Return: sgrt root of n or -1
 */

int _sqrt_recursion(int n)
{
	return (square(1, n));
}
