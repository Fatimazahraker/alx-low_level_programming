#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * main - print the largest prime factor of the number 612852475143
 *
 * return: always 0
 */
int main(void)
{
	int i;
	int max = -1;
	long int n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;

	printf("%d\n", max);
	return (0);
}

