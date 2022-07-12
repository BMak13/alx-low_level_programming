#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two intergers.
 * main - function block of code
 * @a: entry a
 * @b: entry b
 * Return: alwways 0
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
