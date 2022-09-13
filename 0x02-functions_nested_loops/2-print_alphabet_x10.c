#include "main.h"
/**
 *print_alphabet_x10 - print 10 times
 *the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int k;
	char ch;

	for (k = 0; k < 10; k++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
