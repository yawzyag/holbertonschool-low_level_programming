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
	int i;

	for (i = 0; *s != c && *s != '\0'; i++)
	{
		s++;
	}
	return (s);
}
