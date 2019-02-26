#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsum - sum diagonals
 * @a: array from number
 * @size: size of sum to print
 *
 * Return: sum of diag
 */
void print_diagsums (int *a, int size)
{
	int i, d1, d2;
	for (i = 0, d1 = 0; i < size * size; i++)
	{
		d1 += *(a + (i));
		i += size;
	}
	for (i = (size * size) - size, d2 = 0; i > 0;)
	{
		d2 += *(a + (i));
		i -= size - 1;
	}

	printf ("%d, %d\n", d1, d2);
}
