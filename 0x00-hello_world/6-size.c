#include <stdio.h>


/**
 * main- prints the sizeof many var types
 *
 * Return: 0
 */
int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float f;


	printf("size of a char: %d byte(s)\n", sizeof(a));
	printf("size of int: %d byte(s)\n", sizeof(b));
	printf("size of long int %d byte(s)\n", sizeof(c));
	printf("size of long long int %d byte(s)\n", sizeof(d));
	printf("size of float %d byte(s)\n", sizeof(f)
	return (0);

}
