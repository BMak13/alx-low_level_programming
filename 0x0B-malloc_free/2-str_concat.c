#include "main.h"

/**
 *str_concat- concatenates two strings together
 *@s1: string 1
 *@s2: string 2
 *Return: string 1 + string 2
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *s;
	/*
	 * conditions of the function
	 */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*
	 *string 1 -[variable i] i will increase to a value 1++
	 *string 2 [variable j] j will increase to a value 1++
	 */
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;

	/*
	 * Memory allocation
	 */

	s = (char *)malloc(l * sizeof(char) + 1);

	while (k < l)
	{
		if (k < i)
			s[k] = s1[k];
		if (k > i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
