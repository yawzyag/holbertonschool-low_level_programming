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
        while(str[i]!='\0')
        {
		_putchar(str[i]);
		i++;
        }
	_putchar('\n');
}
