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
			return (0);
	return (s);
}

/**
 * _strpbrk - locates a character in a string
 * @s: string
 * @accept: character to find
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s > 0)
	{
		if (_strchr(accept, *s++))
			return (--s);
	}
	return (0);
}
