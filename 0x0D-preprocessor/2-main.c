#include <stdio.h>
#define NAME __FILE__
/**
 * main - a program that prints the name of the file
 * @void: nothing
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
