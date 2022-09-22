#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: string destination
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
		while (src[a] != '\0')
		{
			dest[b + a] = src[a];
			a++;
		}
	return (dest);
}
