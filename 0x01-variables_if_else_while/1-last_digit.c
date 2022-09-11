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
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
