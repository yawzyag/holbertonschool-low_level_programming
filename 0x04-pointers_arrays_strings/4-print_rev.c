#include "holberton.h"

/**
 * print_rev - show a table whit 9 multiplication
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

        for (j = i; j > 0; j--)
        {
		s--;
		_putchar(*s);
        }
        _putchar('\n');
}
