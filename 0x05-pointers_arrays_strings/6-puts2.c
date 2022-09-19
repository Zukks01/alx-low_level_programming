#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */
void puts2(char *str)
{
	int k;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
			_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
