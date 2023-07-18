#include <unistd.h>

/**
 * _putchar.c - write the character c to stdout
 * @c: char to print
 *
 * Return: 1 (Success)
 * on error, -1 is returned, and errors are set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
