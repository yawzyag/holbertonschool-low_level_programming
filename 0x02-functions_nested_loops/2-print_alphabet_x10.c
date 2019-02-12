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
		print_alphabet();
		_putchar('\n');
	}
}


/**
* print_alphabet - Prints "a to z"
*
* This is a longer description.
* Don't forget that a line should not exceed 80 characters.
* But you're totally free to use several lines to properly
* describe your function
* Return: 0
*/
int print_alphabet(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		_putchar (var);
	}
	return (0);
}
