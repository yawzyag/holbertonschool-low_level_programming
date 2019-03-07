#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - show the length of string
 *@s: string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i);)
		i++;
	return (i);
}

/**
 * string_nconcat - cocat 2 strings, second string whit n size
 * @s1: str 1
 * @s2: str 2
 * @n: num of letters
 *
 * Return: concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len, i, j;
	char *ptr;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n <= len2)
		len2 = n;

	len = len1 + len2;

	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (ptr == NULL)
		return (0);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
