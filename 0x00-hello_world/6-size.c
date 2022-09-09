#include <stdio.h>
/**
 * main - prints the size of various types using printf
 * Description: using the main function to print
 * the size of various types
 * Return: 0
 */
int main(void)
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (signed char)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (signed int)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (signed long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (long long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (signed long)sizeof(f))
	return (0);
}
