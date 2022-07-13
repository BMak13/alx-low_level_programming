#include "main.h"

/**
 *strlen - provides length of stings
 *@s - string input
 *Return: length of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0 ; s[index] != '\0' ; index++)
		;
	return (index);

}
