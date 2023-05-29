#include <stdio.h>
#include "main.h"

/**
 * _puts - print out the string
 *@str: string to be printed
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str++);
	}
	putchar('\n')
}
