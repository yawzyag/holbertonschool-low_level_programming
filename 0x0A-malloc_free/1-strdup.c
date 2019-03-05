#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: string
 *
 * Return: number acci code
 */
char *_strdup(char *str)
{
	int len, i;
	char *cpy;

	if (!*str)
		return (0);

	for (i = 0, len = 0; *(str + i); i++)
		len++;

	cpy = malloc(len + 1);

	for (int i = 0; i <= len; i++)
		*(cpy + i) = *(str + i);

	return (cpy);
}
