#include "holberton.h"

/**
 * _pow_recursion - print return x raised to y
 * @x: number raised to
 * @y: number to raise
 *
 * Return: num
 */
int _pow_recursion(int x, int y)
{
	int sum;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	sum = _pow_recursion(x, y / 2);

	if (y % 2 == 0)
		return (sum * sum);
	else
		return (x * sum * sum);
}
