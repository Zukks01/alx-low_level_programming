#include <stido.h>
#include <unistd.h>
/**
 * main - a program that prints all possible
 * different combinations of two digits using putchar
 *
 * Return: 0
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(i);
				putchar(c);
				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
