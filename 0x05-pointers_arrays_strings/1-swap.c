#include "main.h"

/**
 * swap_int - swap int a with b and b with a
 *@a: variable to be swapped
 *@b: variable to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
