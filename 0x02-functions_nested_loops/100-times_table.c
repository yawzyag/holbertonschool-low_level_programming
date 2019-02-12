#include "holberton.h"

/**
 * print_times_table - show the table of a number
 * @n: number to check
 *
 */
void print_times_table(int n)
{
	int var, i, c;

	if (n > 0 && n < 15)
	{
		for (var = 0; var <= n; var++)
		{
			for (i = 0; i <= n; i++)
			{
				c = i * var;
				if (c >= 100)
				{
					if (i > 0 && i < 15)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar((c / 100) + '0');
					_putchar(((c % 100) / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 10)
				{
					if (i > 0 && i < 15)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					if (i > 0 && i < 15)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(c + '0');
				}
			}
			_putchar('\n');
		}
	}
}
