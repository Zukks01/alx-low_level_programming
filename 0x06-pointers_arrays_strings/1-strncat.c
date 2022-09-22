#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string d
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
		;
	while (src[a] != '\0' && a < n)
	{
		dest[b + a] = src[a];
		a++
	}
	return (dest);
}
