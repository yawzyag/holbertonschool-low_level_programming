#include "holberton.h"

/**
 * reverse_array - show a table whit 9 multiplication
 * @a: array of numbers
 * @n: array lengh
 *
 * Return: number acci code
 */
void reverse_array(int *a, int n)
{
	int i, length;
	int *begin, *end, temp;

	length = n;

	begin = a;
	end = a;
	for (i = 0; i < length - 1; i++)
	{
		end++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
