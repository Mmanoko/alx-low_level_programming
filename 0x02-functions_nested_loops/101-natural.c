#include <stdio.h>

/**
 * main - list all natural numbers below 1024
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%dn", sum);
	return (0);
}
