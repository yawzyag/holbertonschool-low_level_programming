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
	while (*s != c)
		if (!*s++)
			return 0;
	return (s);
}
