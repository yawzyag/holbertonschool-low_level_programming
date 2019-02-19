#include "holberton.h"

/**
 * rev_string - show a table whit 9 multiplication
 *@s: string
 *
 * Return: lenght of string
 */
void rev_string(char *s)
{
	int i, j, length, c;
	char *begin, *end, temp;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	length = i;
	for (j = i; j > 0; j--)
	{
		s--;
	}
	begin = s;
	end = s;
	for (c = 0; c < length - 1; c++)
	{
		end++;
	}
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
