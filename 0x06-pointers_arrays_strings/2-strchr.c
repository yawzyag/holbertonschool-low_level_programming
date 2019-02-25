#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to find
 *
 * Return: number acci code
 */
char *_strchr(char *s, char c)
{
	char *p = s;
	int i;

	for (i = 0; *s != c; ++i)
		++s;

	if (*s == c)
	{
		return (p + i);
	}
	else
		return (0);
}
