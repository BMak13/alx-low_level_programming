#include "main.h"
/**
* print_alphabet -prints  lower case letters
* Description: indicating the letters to be input in lower case
* Return: Always 0 (sucess)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
