#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Bravo)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(S)\n", sizeof(int));
	printf("Size of a long: %d byte(s)\n", sizeof(long));
	printf("Size of a short: %d byte(s)\n", sizeof(short));
	printf("Size of a long long: %d byte(s)", sizeof(long long));
	printf("Size of a float: %d byte(s)", sizeof(float));
	printf("Size of double: %d byte(s)", sizeof(double));
	printf("Size of long double: %d byte(s)", sizeof(long double));
	return 0;
}
