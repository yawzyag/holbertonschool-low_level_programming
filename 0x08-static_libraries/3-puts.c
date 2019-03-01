#include "holberton.h"

/**
 * _puts - show a table whit 9 multiplication
 * @str:string to check
 *
 * Return: numbers (0 to 9)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
