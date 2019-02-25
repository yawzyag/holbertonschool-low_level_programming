#include "holberton.h"

/**
 * print_diagsum - sum diagonals
 * @a: array from number
 * @size: size of sum to print
 *
 * Return: sum of diag
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	for(i = 0;i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if(i == j)
			{
				sum += a[i][j];
			}
		}
	}
	_putchar(sum);
}
