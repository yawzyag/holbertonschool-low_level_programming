#include "holberton.h"

/**
 * print_most_numbers - show numbers whitout 2 and 4
 *
 * Return: numbers (0 to 9 whitout 2 and 4)
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
