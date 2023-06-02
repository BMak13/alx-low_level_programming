#include "main.h"

/**
 *_strncat - join two strings with n bytes
 *@dest: copy to dest
 *@src: copy from
 *@n: number of characters to be copied
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int o;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}
