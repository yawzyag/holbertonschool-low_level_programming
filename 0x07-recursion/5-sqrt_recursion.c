#include "holberton.h"

/**
 * _sqrt - natural square
 * @n: string to print
 * @x: string to count
 *
 * Return: num
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x > n / 4)
	{
		return (-1);
	}
	return (_sqrt(n, ++x));
}

/**
 * _sqrt_recursion - print natural square
 * @n: string to print
 *
 * Return: num
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	return (_sqrt(n, x));
}
