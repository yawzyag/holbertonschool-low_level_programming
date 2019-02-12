#include "holberton.h"

/**
* print_alphabet - Prints "a to z"
*
* Return: 0 if all good
*/
int print_alphabet(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		_putchar (var);
	}
	_putchar('\n');
	return (0);
}
