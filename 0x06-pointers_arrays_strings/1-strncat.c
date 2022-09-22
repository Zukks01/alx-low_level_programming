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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
