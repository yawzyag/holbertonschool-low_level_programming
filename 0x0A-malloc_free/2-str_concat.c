#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - copy a string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: number acci code
 */
char *str_concat(char *s1, char *s2)
{
	int len, len1, len2, i;

	for (i = 0, len1 = 0; *(s1 + i); i++)
		len1++;

	for (i = 0, len2 = 0; *(s2 + i); i++)
		len2++;

	len = len1 + len2;

	if (!(len))
		return (0);

	char *string = malloc(len + 1);
	char *res = string;

	for (; *s1;)
		*string++ = *s1++;
	for (; *s2;)
		*string++ = *s2++;
	*string = '\0';
	return (res);
}
