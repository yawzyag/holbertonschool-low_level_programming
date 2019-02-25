#include "holberton.h"

/**
 * _memset - fills memory whit a constant byte
 * @s: char
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *p = s;

	for (i = 0; n > 0; n--, i++)
	{
		*p = b;
		p++;
	}
	return(s);
}
