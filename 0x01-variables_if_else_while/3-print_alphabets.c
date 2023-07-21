#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		uppercase += 1;
	}
	putchar('\n');
	return (0);
}


