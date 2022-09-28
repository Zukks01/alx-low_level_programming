#include "main.h"
/**
 * sqrt2 - evaluate from 1 to n
 * @a: same as n
 * @b: number that repeats from 1 to n
 * Return: success
 */
int sqrt2(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (sqrt2(b, a + 1));
}
/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: integer number
 * Return: success
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
