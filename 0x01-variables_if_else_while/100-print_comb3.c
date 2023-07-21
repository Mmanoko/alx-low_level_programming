#include <stdio.h>

/**
 * main - function to print combination of 2 numbers
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				_putchar(i);
				_putchar(j);
				if (i == '8' && j == '9')
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		j = '0';
			i++;
	}
	return (0);
}
