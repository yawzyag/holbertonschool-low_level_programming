#include "holberton.h"

/**
* times_table - show a table whit 9 multiplication
*
* Return: The table
*/
void times_table(void)
{
	int var, i, c;

	for (var = 0; var < 10 ; var++)
	{
		for (i = 0; i < 10; i++)
		{
			c = i * var;
			if (c >= 10)
			{
				if (i > 0 && i < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				if (i > 0 && i < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}

