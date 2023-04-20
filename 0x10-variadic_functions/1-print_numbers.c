#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbres followed by new line
 * @separator: separartor btwn numbres
 * @n: number of parameter
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

