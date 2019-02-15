#include "holberton.h"

/**
 * print_number - show a number whit putchar
 *@n: variable to print number
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	putchar((n % 10) + '0');
}
