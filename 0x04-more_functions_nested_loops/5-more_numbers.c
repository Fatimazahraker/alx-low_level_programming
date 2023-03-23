#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{

	for (i = 0 ; i <= 14 ; i++)
	{
		if (i <= 9)
		{
			_putchar('0' + i);
		}
		if (i > 9)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
	}
	_putchar('\n');
	}
}


