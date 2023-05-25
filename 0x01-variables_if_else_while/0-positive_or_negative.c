#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints  Positive anything is better than negative nothing
 * @n: variable to be compared
 *
 * Return (0)
 *betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0);
	{
		printf("%d is positive\n",n);
	}
	else if (n == 0);
	{
		printf("%d is zero\n",n);
	}
	else (n < 0);
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
