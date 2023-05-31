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
	int arr[5];
	int e;

	for (e = 0; e <= 5; e++)
	{
		printf("%d, ", arr[e]);
	}
}
