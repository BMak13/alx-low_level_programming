#include <stdio.h>

/**
 * main- prints all single digit numbers of base 10 starting from 0
 * @c - numbers to be printed
 * Description: this shall print base numbers
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58 ; n++)
	{
	putchar(n);
	}
	putchar(10); /* this is an ascii code for a new line */

	return (0);
}
