#include "holberton.h"

/**
 * _puts_recursion - print whit recursion
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
