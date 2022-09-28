#include "main.h"
/**
 * sqrt2 - evaluate from 1 to n
 * @a: same as n
 * @b: number that repeats from 1 to n
 * Return: success
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
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
