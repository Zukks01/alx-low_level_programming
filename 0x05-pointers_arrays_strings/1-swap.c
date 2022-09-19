#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: the first integer to swap
 * @b: the second integer too swap
 */
void swap_int(int *a, int *b)
{
	int x = *a;
		*a = *b;
		*b = x;
}
