#include "holberton.h"

void jack_bauer(void)
{
	int var1, var2;

	for (var1 = 0; var1 < 24; var1++)
	{
		for (var2 = 0; var2 < 60; var2++)
		{
			_putchar((var1 / 10) + '0');
			_putchar((var1 % 10) + '0');
			_putchar(':');
			_putchar((var2 / 10) + '0');
			_putchar((var2 % 10) + '0');
			if (var1 < 24)
			{
				_putchar('\n');
			}
		}
	}
}
