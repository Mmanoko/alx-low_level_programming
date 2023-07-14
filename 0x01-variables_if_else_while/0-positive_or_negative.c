#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Positive anything is better than negative nothing
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*  program */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n == 0)
	{
		 printf("%d is %s\n", n, "zero");
	}
	else
	{
		 printf("%d is %s\n", n, "positive");
	}
	return (0);
}
