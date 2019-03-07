#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - show the length of string
 * @min: min num
 * @max: max range num
 *
 * Return: lenght of string
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	for (i = 0; i <= (max - min);)
	{
		i++;
	}
	ptr = malloc(i * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		ptr[i] = i + min;

	return (ptr);
}
