#include "function_pointers.h"

/**
 * int_index - show the index ocurrency
 * @array: array to check
 * @size: size of array
 * @cmp: function to compare value
 *
 * Return: name of person coincidence
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
