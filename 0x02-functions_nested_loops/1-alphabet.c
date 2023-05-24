#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet
 * @c - holds the alphabet to be printed
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c ='a'; c = 'z'; c++);
	{
		putchar(c);
	}
	putchar('\n');
}
