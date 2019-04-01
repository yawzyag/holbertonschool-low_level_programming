#include "holberton.h"

/**
 * binary - print recursive
 * @n: num
 *
 * Return: On success 1.
 */
void binary(unsigned long int n)
{
	if (n)
	{
		binary(n >> 1);
		_putchar ((n & 1) ? '1' : '0');
	}
}
/**
 * print_binary - num to binary
 * @n: binary number
 *
 * Return: number in int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar ('0');
	else
		binary(n);
}
