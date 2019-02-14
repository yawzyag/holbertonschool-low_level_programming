#include "holberton.h"

/**
 * print_square - show a table whit 9 multiplication
 * @size: size of square
 * description: funtion to print number of lines on diagonal
 *
 * Return: void
 */
void print_square(int size)
{
	int h, i;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (i = 0; i < size; i++)
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
