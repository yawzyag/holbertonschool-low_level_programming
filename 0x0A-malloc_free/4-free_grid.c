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
	int i;

	for(i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
