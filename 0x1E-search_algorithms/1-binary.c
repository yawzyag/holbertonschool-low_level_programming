#include "search_algos.h"

/**
 * print_array - function to search in all items
 * @array: array to traverse
 * @init: size of array
 * @size: value to search
 * Return: index of item if exist, otherwise -1
 */
void print_array(int *array, size_t init, size_t size)
{
	size_t i;

	for (i = init; i < size; i++)
		printf("%d, ", array[i]);
	printf("%d", array[i]);
}

/**
 * binary_search - function to search in all items
 * @array: array to traverse
 * @size: size of array
 * @value: value to search
 * Return: index of item if exist, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t m = 0;
	size_t last = size - 1;

	if (!array)
		return (-1);
	while (first <= last)
	{
		m = first + (last - first) / 2;

		printf("Searching in array: ");
		print_array(array, first, last);
		printf("\n");
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			first = m + 1;
		else
			last = m - 1;
	}
	return (-1);
}
