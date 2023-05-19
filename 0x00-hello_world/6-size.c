#include<stdio.h>
/**
 * main - Size of usage
 *
 * Description: Size of various types
 * Return: always 0 (success)
 */
int main(void)
{
	char charType;
	int intType;

	Long int longType;
	long long int LLintype;
	float floatType;


	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of a int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longType));
	printf("Size of a long long int: %zu bytes\n", sizeof(LLintype));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
