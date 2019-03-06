#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * free_grid - free memory
 * @grid: string
 * @height: heigth
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(*(grid + i));

		free(grid);
	}
}
