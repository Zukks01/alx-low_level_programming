#include "main.h"
/**
 * _print_rev_recursion- a function that print a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s++);
	_putchar(*s);
}
