#include "function_pointers.h"

/**
 * array_iterator - iterator of the array
 * @array: array to check
 * @size: size of array
 * @action: function to print
 *
 * Return: name of person coincidence
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if(action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
