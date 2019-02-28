#include "holberton.h"


/**
 * prime - show a table whit 9 multiplication
 * @n: number
 * @x: increment
 *
 * Return: char
 */
int prime(int n, int x)
{
	if (n > x)
	{
		if (n % x != 0)
		{
			return (prime(n, x + 1));
		}
	}
}

/**
 * is_prime_number - print 0 or 1
 * @n: num to check
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n > 2)
	{
		return (prime(n, x) / n);

	}
	return (0);
}
