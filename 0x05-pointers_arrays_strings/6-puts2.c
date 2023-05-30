#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character
 * @str: the string
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int o;

	while (str[o] != '\0')
	{
		o++;
	}

	for (i = 0; i < o; i += 2)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
