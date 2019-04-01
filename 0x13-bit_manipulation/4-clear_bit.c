#include "holberton.h"

/**
 * clear_bit - clear certain bit at index
 * @n: num
 * @index: index
 *
 * Return: num or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	unsigned long int uimax = sizeof(unsigned long int) * 8;

	if (index > uimax)
		return (-1);
	*n = *n & ~mask;
	return (1);
}
