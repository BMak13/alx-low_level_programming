#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] - s2[c])
		{
			return (s1[c] - s2[c]);
		}
	c++;
	}
	return (0);
}
