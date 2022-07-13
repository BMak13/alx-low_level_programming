#include "main.h"

/**
 * _strlen - length of string
 *_strlen: function  provides length of string
 *@s: string input parameter
 *Return: length of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0 ; s[index] != '\0' ; index++)
		;
	return (index);

}
