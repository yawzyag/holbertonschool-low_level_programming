#include "holberton.h"

/**
 * print_numbers - show a table whit 9 multiplication
 *
 * Return: numbers (0 to 9)
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
