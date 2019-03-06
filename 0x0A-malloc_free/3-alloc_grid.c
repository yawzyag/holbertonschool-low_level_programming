#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _free - free
 * @arr: array
 * @i: size
 *
 * Return: void
 */
void _free(int **arr, int i)
{
	int j;

	for (j = i - 1; i >= 0; j--)
		free(arr[j]);

	free(arr);
}

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

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);

		if (arr == NULL)
		{
			_free(arr, i);
			return (NULL);
		}
	}
	for (i = 0; j <  width; j++)
		arr[i][j] = 0;

	return (arr);
}
