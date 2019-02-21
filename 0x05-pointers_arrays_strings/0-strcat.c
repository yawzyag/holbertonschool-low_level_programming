#include "holberton.h"

/**
 * _strcat - show a table whit 9 multiplication
 * @n: number to point
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *dest != '\0'; i++)
		dest++;
	for(j = 0; *src != '\0'; j++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
