#include <stdio.h>
/**
 * main - C program that prints the size of various types using printf
 *
 * Description: using the main function to print
 * the various types
 * Return: 0
 */
int main(void)
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;
	short x;

	printf("size of char: %lu byte(s)\n", (signed char)sizeof(d));
	printf("size of int: %lu byte(s)\n", (signed int)sizeof(a));
	printf("size of long int: %lu byte(s)\n", (signed long int)sizeof(b));
	printf("size of long long int: %lu byte(s)\n", (long long int)sizeof(c));
	printf("size of float: %lu byte(s)\n", (signed float)sizeof(f));
	printf("size of short: %lu byte(s)\n",  (signed int)sizeof(x));
	return (0);
}
