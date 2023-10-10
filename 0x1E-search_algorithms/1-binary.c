#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int i, j, start = 0, end = size - 1, midl;

	if (array == NULL)
		return -1;

	for (i = start; start <= end; i++)
	{
		midl = (end + start) / 2;
		printf("Searching in array:");
		for ( j = start; j <= (end - 1); j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		if (value < array[midl])
			end = midl - 1;
		else start = midl + 1;
		if (array[midl] == value)
			return midl;

	}
	return -1;
}
