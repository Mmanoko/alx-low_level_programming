#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
