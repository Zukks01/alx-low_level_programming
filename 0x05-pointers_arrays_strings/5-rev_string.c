#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int x = 0, i, j;
	char *end, temp;

	while (s[x] == '\0')
	{
			x++;
	}
	end = s;
	for (i = 0; i < (x - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(end + j) = *(end + (j - 1));
			*(end + (j - 1)) = temp;
		}
	}
}
