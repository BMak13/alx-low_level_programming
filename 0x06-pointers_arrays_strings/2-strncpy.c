#include "main.h"

/**
 *_strncat - join two strings with n bytes
 *@dest: copy to dest
 *@src: copy from 
 *@n: number of characters to be copied
 *Return: dest	
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int o = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (o < n && src[o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest)
}

	
