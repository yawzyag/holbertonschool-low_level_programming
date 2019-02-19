#include "holberton.h"

/**
 * _puts2 - show a table whit 9 multiplication
 * @str:string to check
 *
 * Return: numbers (0 to 9)
 */

void puts2(char *str)
{
	int i;
	while(str[i]!='\0')
	{
		if(i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
