#include "main.h"
/**
 *main: print_last_digit - prints the last digit of a number
 * @x: number of the last digit result
 *Returns: the value of the last digit
 */
int print_last_digit(int x)
{
	if (x < 0)
		x = x * -1;
	_putchar((x % 10) + '0');
	return (x % 10);
}
