#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0
 */

int main(void)
{
	char l;
	char b;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
