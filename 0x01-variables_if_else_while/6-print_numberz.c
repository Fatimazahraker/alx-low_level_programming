#include <stdio.h>
/**
 * main - a program that print numbers from 0 to 10
 * Return: 0 (Success)
 */
int main(void)
{	int i;
	for (i = 0 ; i < 10 ; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
