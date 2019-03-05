#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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

	cpy = malloc(sizeof(*cpy) * (len + 1));

	if (cpy == NULL)
		return (0);

	for (int i = 0; i < len; i++)
		*(cpy + i) = *(str + i);

	*(cpy + i) = '\0';

	return (cpy);
}
