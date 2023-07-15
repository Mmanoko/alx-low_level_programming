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
			lowerCase ++;
		}
		else
		{
			putchar(lowerCase)
				lowerCase += 1;
		}
	}
	putchar('\n');
	return (0);
}
