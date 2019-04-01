#include "holberton.h"

/**
 * get_endianness - get certain bit at index
 *
 * Return: void
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
