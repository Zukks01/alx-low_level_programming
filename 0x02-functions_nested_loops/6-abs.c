#include "mmain.h"
/**
 * _abs - function that computes the
 * absolute value of an integer
 * @b: the integer to be converted
 * Return: absolute value of the input number
 */
int _abs(int b)
{
	if (b > 0 || b == 0)
	{
		return (b);
	}
	else
		return (b * -1);
}
