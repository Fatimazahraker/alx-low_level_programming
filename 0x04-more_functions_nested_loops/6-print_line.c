#include "main.h"
#include <stdio.h>

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	}
	if ( n <= 0)
	_putchar('\n');

	_putchar('\n');
}


