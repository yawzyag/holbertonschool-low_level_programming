#include "search_algos.h"

/**
 * mini - function to search in all items
 * @a: array to traverse
 * @b: size of array
 * Return: index of item if exist, otherwise -1
 */
size_t mini(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

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
 * binarysearch - function to search in all items
 * @array: array to traverse
 * @first: size of array
 * @last: last item
 * @value: value to search
 * Return: index of item if exist, otherwise -1
 */
int binarysearch(int *array, size_t first, size_t last, int value)
{
	size_t m = 0;

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

/**
 * exponential_search - function to search in all items
 * @array: array to traverse
 * @size: size of array
 * @value: value to search
 * Return: index of item if exist, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, start = 0;

	if (!array)
		return (-1);
	if ((size - start) <= 0)
		return (-1);
	i = 1;
	while (i < (size - start))
	{
		if (array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}
		else
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       i / 2, mini(i, size - 1));


	return (binarysearch(array, i / 2, mini(i, size - 1), value));
}
