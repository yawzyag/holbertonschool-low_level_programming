#include "holberton.h"

/**
 * _strcat - show a table whit 9 multiplication
 * @dest: string to pass
 * @src: string to add
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int length, i, j;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
	}
	length = i;
	for (j = i; j > 0; j--)
	{
		dest--;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
