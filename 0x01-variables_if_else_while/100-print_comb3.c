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
	int i;
	int c;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (i < c)
			{
				putchar(i);
				putchar(c);
				if (i != '8' || (i == '8' && c != '9'))
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
