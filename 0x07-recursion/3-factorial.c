#include "holberton.h"

/**
 * _strlen_recursion - print length whir recursion
 * @s: string to check
 *
 * Return: void
 */
int factorial(int n)
{

	if (n == 0)
	{
		return(1);
	}
	else if (n < 0)
	{
		return(-1);
	}
	return(n * factorial(n -1));
}
