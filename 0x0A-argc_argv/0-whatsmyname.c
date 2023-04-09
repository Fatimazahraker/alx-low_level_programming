#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: the size of arry
 * @argv: an array of string
 */

int main ( int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
