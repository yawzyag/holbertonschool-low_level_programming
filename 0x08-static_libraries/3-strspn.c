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
 * _strspn - gets length of a prefix substring
 * @s: string to check
 * @accept: coincidence
 *
 * Return: unsigned int coincidence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; *s && _strchr(accept, *s++); i++)
	{}
	return (i);
}
