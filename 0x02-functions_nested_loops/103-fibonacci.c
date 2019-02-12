#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 1, num2 = 2, fib, sum = 0;

	for (fib = 0; fib < 4000000; fib++)
	{
		fib = num1;
		num1 = num2;
		num2 = fib + num1;
		if (fib % 2 == 0)
		{
			sum = fib + sum;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
