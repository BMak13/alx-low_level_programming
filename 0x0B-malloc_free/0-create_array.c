#include "main.h"
#include <stdlib.h>
/**
 *create_array - create an array
 *@size: size of the array made
 *@c: character an array is initialized by
 *return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

		if (ch == NULL)
			return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
