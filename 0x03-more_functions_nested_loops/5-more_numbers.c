#include "holberton.h"

/**
 * more_numbers - Prints "a to z" 10 times
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar ((num / 10) + '0');
			}
			_putchar ((num % 10) + '0');
		}
		_putchar('\n');
	}
}
