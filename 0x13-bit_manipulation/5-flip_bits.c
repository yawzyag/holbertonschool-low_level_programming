#include "holberton.h"

/**
 * count_set_bits - count bits
 * @n: num
 *
 * Return: count
 */
int count_set_bits(unsigned long int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - clear certain bit at index
 * @n: num
 * @m: index
 *
 * Return: num or -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
