#include "holberton.h"

/**
 * get_bit - get certain bit at index
 * @n: num
 * @index: index
 *
 * Return: num or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
