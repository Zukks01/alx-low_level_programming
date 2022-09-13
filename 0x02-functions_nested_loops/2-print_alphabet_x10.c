#include "main.h"
/**
 *print_alphabet - print 10 times
 *the alphabet, in lowercase
 */
void print_alphabet_x10(void);
{
	char ch;

	for (ch = 0; ch < 10; ch++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
