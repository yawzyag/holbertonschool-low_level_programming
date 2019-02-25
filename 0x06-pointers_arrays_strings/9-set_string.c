#include "holberton.h"

/**
 * set_string - set string pointer to pointer
 * @s: string to point
 * @to: string to copy
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = (char *)to;
}
