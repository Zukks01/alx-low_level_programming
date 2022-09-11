#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * Description: using the main function use putchar
 * to print alphbet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
