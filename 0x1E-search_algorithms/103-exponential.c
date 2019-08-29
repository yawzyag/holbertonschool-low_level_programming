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
 * binarySearch - function to search in all items
 * @array: array to traverse
 * @start: size of array
 * @end: end of array
 * @key: value to search
 * Return: index of item if exist, otherwise -1
 */
int binarySearch(int *array, int start, int end, int key)
{
	int mid;

	if (start <= end)
	{
		mid = (start + (end - start) / 2);

		if (array[mid] == key)
		{
			if (mid == key)
			{
				printf("Searching in array: ");
				print_array(array, start, end);
				printf("\n");
			}
			return (mid);
		}
		printf("Searching in array: ");
		print_array(array, start - 1, end - 1);
		printf("\n");
		if (array[mid] > key)
			return (binarySearch(array, start, mid - 1, key));

		return (binarySearch(array, mid + 1, end, key));
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
	return (binarySearch(array, i / 2, mini(i, size), value));
}
