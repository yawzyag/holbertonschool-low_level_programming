#include "holberton.h"

/**
 * puts_half - show a table whit 9 multiplication
 *@str: string
 *
 * Return: lenght of string
 */
void puts_half(char *str)
{
	int i, j, length, ch;

	for (i = 0; *str != '\0'; i++)
	{
		str++;
	}
	length = i;
	for (j = i; j > 0; j--)
	{
		str--;
	}
	if ((length - 1) % 2 != 0)
	{
		length = (length - 1);
		str = str + (length / 2) + 1;
	}
	else
	{
		str = str + (length / 2);
	}
	for (ch = 0; str[ch] != '\0'; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}
