#include "holberton.h"

/**
 * _strncpy - show a table whit 9 multiplication
 * @dest: destination
 * @src: string to add
 * @n: number of lines
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
