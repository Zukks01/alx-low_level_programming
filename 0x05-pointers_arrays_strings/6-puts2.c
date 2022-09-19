#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 * @str: string to print
 */
void puts2(char *str)
{
	int tem;

	while (str[tem] != '\0')
	{
		if (tem % 2 == 0)
			_putchar(str[tem]);
		tem++
	}
	_putchar('\n');
}
