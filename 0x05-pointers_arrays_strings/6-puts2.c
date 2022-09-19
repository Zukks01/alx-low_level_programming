#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 * @str: string to print
 */
void puts2(char *str)
{
	int k;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
			_putchar(str[k]);
		k++
	}
	_putchar('\n');
}
