#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */
void puts2(char *str)
{
	int k = 0

	while (k >= 0)
	{
		if (str[k] == '\0')
		{
			_putchar('\n');
		}
		if (k % 2 == 0)
			_putchar(str[k]);
		k++;
	}
}
