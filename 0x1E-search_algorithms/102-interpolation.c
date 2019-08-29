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
	int low = 0, high = (size - 1);
	size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

	if (!array)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
