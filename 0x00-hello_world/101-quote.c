#include <stdio.h>
#include <unistd.h>
/**
 * main - printing string without using printf
 * Description: using the main function print
 * and that piece of art is useful - Dora Korpar, 2015-10-19
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
