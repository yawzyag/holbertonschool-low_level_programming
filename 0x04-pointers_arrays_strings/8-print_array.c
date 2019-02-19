#include "holberton.h"
#include <stdio.h>
/**
 * print_array - show a table whit 9 multiplication
 * @a: pointer to array
 * @n: number of items to display
 *
 * Return: numbers (0 to 9)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0 && i < n)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
