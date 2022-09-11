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
		printf("%i is positive\n", n);
	}
else if (n < 0)
{
	/* if condition is false print the following */
	printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
