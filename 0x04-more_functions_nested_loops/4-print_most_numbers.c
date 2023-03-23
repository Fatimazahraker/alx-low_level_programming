#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9,except 4 and 2
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (!(i == 4 || i == 2))
		{
			_putchar('0' + i);
		}
	}
	 _putchar('\n');
}
