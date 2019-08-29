#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function to search in all items
 * @array: array to traverse
 * @size: size of array
 * @value: value to search
 * Return: index of item if exist, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump = sqrt(size);
	size_t first = 0;

	if (!array)
		return (-1);
	while (first < size)
	{
		if (array[first] >= value)
			break;
		
		printf("Value checked array[%lu] = [%d]\n", first, array[first]);
		first += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", first - jump, first);
	for (i = first - jump; i <= first && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
