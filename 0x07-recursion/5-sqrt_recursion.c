#include "holberton.h"

/**
 * _sqrt_recursion - print natural square
 * @n: string to print
 *
 * Return: num
 */
int _sqrt_recursion(int n)
{
	int x = n;
	int y = 1;
	while (x > y)
	{
		x = (x + y) / 2;
		y = n / x;
	}
	if(x * x != n)
	{   return -1;
	}
	else
	{
		return x;
	}
}
