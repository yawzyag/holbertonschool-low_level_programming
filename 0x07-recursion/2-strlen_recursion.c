#include "holberton.h"

/**
 * _strlen_recursion - print length whir recursion
 * @s: string to check
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int sum = 1;

	if (*s)
	{
		return (sum + _strlen_recursion(s + 1));
	}
	return (0);
}
