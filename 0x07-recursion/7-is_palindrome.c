#include "holberton.h"

/**
 * isPalRec - show a table whit 9 multiplication
 * @str: string to pass
 * @s: string to add
 * @e: dsdd
 * Return: char
 */
int isPalRec(char *str, int s, int e)
{

	if (s == e)
		return (1);

	if (str[s] != str[e])
		return (1);

	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));

	return (0);
}

/**
 * is_palindrome - show a table whit 9 multiplication
 * @s: string to pass
 *
 * Return: char
 */
int is_palindrome(char *s)
{
	int n, i;

	for (i = 0, n = 0; *(s + i) != '\0'; i++)
		n++;

	if (n == 0)
		return (1);

	return (isPalRec(s, 0, n - 1));
}
