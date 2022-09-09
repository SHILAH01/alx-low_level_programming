#include <stdio.h>

/**
 * main- prints size of many var types
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: % byte(s)\n", sizeof(a));
	printf("size of int: % byte(s)\n", sizeof(b));
	printf("size of long int: % byte(s)\n", sizeof(c));
	printf("size of long long int: % byte(s)\n", sizeof(d));
	printf("size of float: % byte(s)\n", sizeof(e));
	return (0);
}
