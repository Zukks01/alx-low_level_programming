#include "main.h"
/**
 * prime2 - evaluate from 1 to n
 * @a: same as n
 * @b: number that repeats from 1 to n
 * Return: success
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - if input is a prime number
 * @n: integer number
 * Return: success
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2));
}
