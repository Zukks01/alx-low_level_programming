#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: character to use to delimit
 * @n: number of elements to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list nl;

	va_start(nl, n);
	for (i = 0; i < n; i++)
		printf("%i%s", va_arg(nl, int), (separator && i != n - 1) ? separator : "");
	va_end(nl);
	printf("\n");
}