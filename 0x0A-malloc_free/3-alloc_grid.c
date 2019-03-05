#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - copy a string
 * @width: width
 * @height: height
 *
 * Return: number acci code
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc( sizeof(int *) * width);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		arr[i] = malloc(sizeof(int) * height);

	return (arr);
}
