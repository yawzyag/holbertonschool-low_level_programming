#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - copy a string
 * @grid: string
 * @height: heigth
 *
 * Return: number acci code
 */
void free_grid(int **grid, int height)
{
	int j = 0, width, size = 0;

	if (grid != NULL)
	{
		while (*(grid + size))
			size++;
		width = size / height;
		for (j = 0; j < (width * height); j++)
			free(grid[j]);
		free(grid);
	}
}
