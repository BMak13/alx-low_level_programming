#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcpy- print copy 
 *@dest: destination
 *@src: source
 *
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
