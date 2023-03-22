#include "main.h"

/**
 * main - check the code
 *@n: the int to extract the last digit from
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	n = - n;

	digit = n % 10;

	if (digit < 0)
		digit = -digit;

	_putchar(digit + '0');

	return (digit);
}
