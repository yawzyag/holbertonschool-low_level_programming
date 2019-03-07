#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - len of str, erase extra spaces
 * @str: string
 *
 * Return: void
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != ' ' && *str != '\0')
			{
				str++;
			}
			i++;
		}
	}
	return (i);
}


/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: void
 */
char **strtow(char *str)
{
	int i, j, len, count;
	char **ptr, *sub;

	i = j = len = count = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	count = _strlen(str);
	if (count == 0)
		return (NULL);
	ptr = malloc((count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (*str != '\0' && i < count)
	{
		if (*str == ' ')
			str++;
		else
		{	sub = str;
			while (*str != ' ' && *str != '\0')
				str++, len++;
			ptr[i] = malloc((len + 1) * sizeof(char));
			if (ptr[i] == NULL)
			{
				for (; i > 0; i--)
				free(ptr[i]);
				free(ptr);
				return (NULL); }
			while (*sub != ' ' && *sub != '\0')
			{
				ptr[i][j] = *sub;
				sub++;
				j++; }
			ptr[i][j] = '\0';
			i++;
			j = 0;
			len = 0;
			str++; }}
	ptr[count] = NULL;
	return (ptr);
}
