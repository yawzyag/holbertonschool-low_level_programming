#include "holberton.h"

/**
 * swap_int - show a table whit 9 multiplication
 * @a: first num
 * @b: second num
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
