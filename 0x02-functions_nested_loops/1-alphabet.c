#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet
 * @ch - holds the alphabet to be printed
 */

void print_alphabet(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++);
_putchar(ch);
_putchar('\n');
}
