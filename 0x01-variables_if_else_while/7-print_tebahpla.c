#include <stdio.h>

/**
 * main- prints the lowercase alphabets in reverse
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
