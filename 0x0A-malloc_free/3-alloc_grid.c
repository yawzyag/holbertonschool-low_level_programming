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
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
		arr[i] = malloc(sizeof(int) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <  width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;

	return (arr);
}
