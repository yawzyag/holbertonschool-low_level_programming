#include "holberton.h"

/**
 * _strcat - show a table whit 9 multiplication
 * @dest: destination
 * @src: string to add
 * @n: number of lines
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
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
	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
