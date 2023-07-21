#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		_putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		_putchar(letter)

			_putchar('\n');
	return (0);
}
