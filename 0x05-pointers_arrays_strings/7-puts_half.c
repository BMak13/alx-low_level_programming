#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints half of the string
 * @str: string to print
 * Return: 0
 */

void puts_half(char *str)
{
	int n = 0;
	int b;

	while (str[n] != '\n')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		b = (n -1) /2;
		b += 1;
	}
	else 
	{
		b = n / 2;
	}

	for (;b < n; b++)
	{
		putchar(str[b]);
	}
	putchar('\n');
}
