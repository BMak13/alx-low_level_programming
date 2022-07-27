#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly
 *alloacated space in memory
 *@str: string
 *
 * Return: pointer of an array of char
 */
char *_strdup(char *str)
{
	char *s;
	int i = 1, j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
