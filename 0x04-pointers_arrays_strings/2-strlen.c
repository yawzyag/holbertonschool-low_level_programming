#include "holberton.h"

/**
 * _strlen - show a table whit 9 multiplication
 *@s: string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
