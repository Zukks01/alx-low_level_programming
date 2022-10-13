#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list *ptr;

	if (n == 0)
		return (0);
	va_start(*ptr, n);
	for (i = result = 0; i < n; i++)
	{
		result += va_arg(*ptr, int);
	}
	va_end(*ptr);
	return (result);
}
