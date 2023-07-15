#include <stdio.h>
/**
 * main - Entry points
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if ((lowerCase != 'q' && lowerCase != 'e') && lowerCase <= 'z')
		{
			putchar(lowerCase)
				lowerCase ++;
		}
	}
	putchar('\n');
	return (0);
}
