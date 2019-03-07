#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - creates an array of chars, and with a specific char.
 * @b: number
 *
 * Return: number acci code
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
