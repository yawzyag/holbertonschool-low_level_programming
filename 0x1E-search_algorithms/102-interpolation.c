#include "search_algos.h"

/**
 * interpolation_search - function to search in all items
 * @array: array to traverse
 * @size: size of array
 * @value: value to search
 * Return: index of item if exist, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1);
	size_t pos;

	if (!array)
		return (-1);

	while (low < high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		if (pos > high)
			break;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
