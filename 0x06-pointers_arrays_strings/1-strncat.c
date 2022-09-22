#include "main.h"
/**
 *_strncat- a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to print
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
		;
	while (scr[a] != '\0' && a < n)
	{
		dest[a + b] = scr[a];
		a++
	}
	return (dest);
}
