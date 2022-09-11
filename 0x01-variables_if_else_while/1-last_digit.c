#include <stlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determine either greater than 5, is less than 6, or 0
 * Description: using the main fuction printf
 * if the last digit of a random number is greater than or less than 5 or is 0
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
