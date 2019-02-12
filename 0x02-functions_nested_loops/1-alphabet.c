#include "holberton.h"

/**
* print_alphabet - Prints "a to z"
*
*/
void print_alphabet(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		_putchar (var);
	}
	_putchar('\n');
}
