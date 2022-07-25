#include <stdio.h>

/*
 * main - priints the lowercase alphabets i reverse
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
