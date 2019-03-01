#include "holberton.h"

/**
 * _strncat - show a table whit 9 multiplication
 * @dest: destination
 * @src: string to add
 * @n: number of lines
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	for (i = 0, length = 0; *(dest + i) != '\0'; i++)
		length++;

	for (i = 0; i < n && *(src + i) != '\0' ; i++)
		*(dest + (length + i)) = *(src + i);

	*(dest + (length + i)) = '\0';
	return (dest);
}
