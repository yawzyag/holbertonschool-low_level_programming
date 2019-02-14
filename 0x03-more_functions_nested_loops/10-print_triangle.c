#include "holberton.h"

/**
 * print_triangle - show a table whit 9 multiplication
 * @size: size of triangule
 * description: funtion to print number of lines on diagonal
 *
 * Return: void
 */
void print_triangle(int size)
{
	int h, i;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (i = size - 1; i > h; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i <= h; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
