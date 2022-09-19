#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s: string to print
 */
void print_rev(char *s)
{
	int temp = 0;

	while (s[temp >= 0] != '\0')
	{
		temp++;
	}
	for (temp--; temp >= 0; temp--)
	{
		_putchar(s[temp]);
	}
	_putchar('\n');
}
