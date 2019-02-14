#include "holberton.h"

/**
 * print_diagonal - show a table whit 9 multiplication
 * @n: number of lines
 * description: funtion to print number of lines on diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int h, i;

	if (n > 0)
	{
		for (h = 0; h < n; h++)
		{
			for (i = 0; i < h; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
