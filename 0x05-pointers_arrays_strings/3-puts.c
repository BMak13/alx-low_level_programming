#include "main.h"

/**
 * _puts - this is a function that puts
 * @str: a paramater to _puts function
 */
void _puts(char *str)
{
	int index
	
	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');


}
