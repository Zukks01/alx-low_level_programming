#include "main.h"
/**
 * main - a function that prints
 * the alphabet, in lowercase using _putchar
 * 
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++);
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);

}
