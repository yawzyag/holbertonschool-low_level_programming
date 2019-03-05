#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copy a string
 * @str: string
 *
 * Return: number acci code
 */
void free_grid(int **grid, int height)
{
	int i, width, size = 0;

	if (grid != NULL)
	{
		while (*(grid + size))
			size++;
		width = size / height;
		for(j = 0; j < (width * height); j++)
			free(grid[j]);
		 free(grid);
	}
}
