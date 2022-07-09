#include <stdio.h>

/**
 * main- prints all single digit numbers of base 10 starting from 0
 * @c - numbers to be printed
 * Description: this shall print base numbers
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57 ; c++)
	{
	putchar(c);
	}
	putchar(10);/* this is an ascii code for a new line */

	return (0);
}
