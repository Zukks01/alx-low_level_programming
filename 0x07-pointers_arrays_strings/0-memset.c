#include "main.h"
/**
 * _memset- a function that fills memory
 * with a constant byte
 * @b: constant bytes
 * @n: functions that fills
 * @s: memory area pointed to
 *
 * Return: s a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	return (s);
}
