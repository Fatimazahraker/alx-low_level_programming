#include "main.h"
#include <stdio.h>

/**
 * factorial -  the factorial of a given number
 * @n: first parameter
 * Return: the value of factorial OR -1
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

		return ( n * factorial(n - 1));
		
}

