#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char rev = string[0];
	int length = 0;
	int i;

	while (string[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
	{
		length--;
		rev = string[i];
		string[i] = string[length];
		string[length] = rev;
	}
}
