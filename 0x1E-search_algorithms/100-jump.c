#include "search_algos.h"
#include <math.h>

/**
 * mini - function to find min
 * @x: array to traverse
 * @y: size of array
 * Return: min num
 */
int mini(int x, int y)
{
	return (x < y ? x : y);
}

/**
 * jump_search - function to search in all items
 * @array: array to traverse
 * @size: size of array
 * @value: value to search
 * Return: index of item if exist, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = 0;
	size_t i;

	if (!array)
		return (-1);
	while (left < size && array[left] <= value)
	{
		right = mini(size - 1, left + jump);
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] <= value && array[right] >= value)
		{
			break;
		}

		left += jump;
	}
	right = mini(size - 1, right);
	if (left > right)
		printf("Value found between indexes [%lu] and [%lu]\n", right, left);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	left = mini(left, right);
	for (i = left; i <= right; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
