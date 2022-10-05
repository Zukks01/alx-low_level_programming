#include <stdio.h>
#include "main.h"
/**
 * main - prints out all of the arguments passed to it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv[0] = 0;
	printf("%d\n", argc - 1);
	return (0);
}
