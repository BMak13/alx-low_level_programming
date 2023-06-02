#include "main.h"
/**
 * reverse_array - reverse array integars
 * @n: number of elements
 * @a: array to reverse
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n; i++)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
