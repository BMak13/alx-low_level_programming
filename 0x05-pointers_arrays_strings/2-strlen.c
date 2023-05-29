#include "main.h"
#include <stdio.h>

/**
 * _strlen - count length of string
 * @s: string to count
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
