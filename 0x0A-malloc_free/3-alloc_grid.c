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

	arr = malloc(sizeof(int *) * height);

	for (i = 0; i < width; i++)
		arr[i] = malloc(sizeof(int) * width);

	if (arr == NULL)
	{
		for(j = 0; j < i; j++)
			free(arr[j]);

		free(arr);
		return (NULL);
	}

	for (i = 0; i <  height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
