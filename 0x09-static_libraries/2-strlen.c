#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: character array
 * Return: length of string
 */
int _strlen(char *s)
{
	int temp = 0;

		while (*s != '\0')
		{
			temp++;
			s++;
		}
	return (temp);
}
