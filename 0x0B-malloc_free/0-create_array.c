#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: strings of char
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	size_t n;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[1] = c;
	}
	return (ptr);
}
