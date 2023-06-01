#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat - concentrate two strings
 *@dest: destination of string
 *@src: second string
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while  (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = scr[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
