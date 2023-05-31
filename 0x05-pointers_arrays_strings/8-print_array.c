#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: array to print
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < (n - 1); d++)
	{
		printf("%d, ", a[d]);
	}
	if (d == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
}
