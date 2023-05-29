#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse string
 * @s: string to print
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int revs = 0;
	int e;

	while (*s != '\0')
	{
		revs++;
		s++;
	}
	s--;
	for (e = revs; e > 0; e--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
