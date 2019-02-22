#include "holberton.h"

/**
 * print_number - show a number whit putchar
 *@n: variable to print number
 *
 */
void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
