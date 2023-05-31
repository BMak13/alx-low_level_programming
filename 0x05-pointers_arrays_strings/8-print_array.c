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
	
	for (n = 0; n <= 5; n++)
	{
		printf("%d, ", a[n]);
	}
}
