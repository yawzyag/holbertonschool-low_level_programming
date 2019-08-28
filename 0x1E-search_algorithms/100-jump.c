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
	size_t left = 0;
	size_t right = 0;

	if (!array)
		return (-1);
	while (left < size && array[left] <= value)
	{
		right = left + jump;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);

		if ((array[left] <= value && array[right] >= value)
			|| left + jump > size - 1)
		{
			break;
		}
		left += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i <= size - 1; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
