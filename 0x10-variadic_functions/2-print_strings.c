#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *words;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(ptr, char *);
		(words) ? printf("%s", words) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
