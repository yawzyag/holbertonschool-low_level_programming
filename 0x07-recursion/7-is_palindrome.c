#include "holberton.h"

/**
 * _strlen_recursion - print length whir recursion
 * @s: string to check
 *
 * Return: string length
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

/**
 * string_compare - print length whir recursion
 * @i: counter
 * @s: string to compare
 * @longth: string longth
 *
 * Return: 0 or 1
 */
int string_compare(int i, char *s, int longth)
{
	if (i >= longth)
	{
		return (1);
	}
	else if (*(s + i) == *(s + longth))
	{
		return (string_compare(i + 1, s, longth - 1));
	}
	return (0);
}

/**
 * is_palindrome - show a table whit 9 multiplication
 * @s: string to pass
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int longth = _strlen_recursion(s);

	return (string_compare(0, s, longth - 1));
}
