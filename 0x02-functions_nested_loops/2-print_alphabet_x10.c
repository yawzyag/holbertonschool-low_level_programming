#include "holberton.h"

/**
 * print_alphabet_x10 - Prints "a to z" 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char var;

		for (var = 'a'; var <= 'z'; var++)
		{
			_putchar (var);
		}
		_putchar('\n');
	}
}
