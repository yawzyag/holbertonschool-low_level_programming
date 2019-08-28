#include "search_algos.h"

/**
 * linear_search - function to search in all items
 * @array: array to traverse
 * @size: size of array
 * @value: value to search
 * Return: index of item if exist, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;

	if (!array)
	{
		return (-1);
	}

	while (size > counter)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       counter, array[counter]);
		if (array[counter] == value)
		{
			return (counter);
		}
		counter++;
	}
	return (-1);
}
