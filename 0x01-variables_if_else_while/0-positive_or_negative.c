#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * main - assigning a random number to the variable n
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2

	if (n > 0)
	{
		/* if condition is true print the following */
		printf("%d is %s\n", n, "positive");
	}
else if (n < 0)
{
	/* if condition is false print the following */
	printf("%i is %s\n", n, "negative");
}
else
{
printf("%i is %s\n", n, "zero");
}
return (0);
}
