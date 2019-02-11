#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}

int print_alphabet(void)
{
	char var;
	for (var = 'a'; var <= 'z'; var++)
	{
		_putchar (var);
	}
	return (0);
}
