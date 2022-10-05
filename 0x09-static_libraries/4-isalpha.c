#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character input
 * Return: 1 if the letter is lowercase
 * othewise 0 if uppercase
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
