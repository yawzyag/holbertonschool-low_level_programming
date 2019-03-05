#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and with a specific char.
 * @size: size
 * @c: character
 *
 * Return: number acci code
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (0);

	ptr = malloc(sizeof(*ptr) * size);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	return (ptr);
}
