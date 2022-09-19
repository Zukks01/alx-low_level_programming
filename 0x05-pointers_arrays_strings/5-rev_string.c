#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char x;

	i = j = 0;
	while (s[i] != '\0')
	{
		x[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = x[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
