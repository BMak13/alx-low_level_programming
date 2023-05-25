#include <stdio.h>

/**
 * main - print letters 
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
