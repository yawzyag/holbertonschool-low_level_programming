#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int num1 = 1, num2 = 2, fib;

	for (i = 1; i < 50; i++)
	{
		if (i > 1 && i < 50)
		{
			printf(", ");
		}
		fib = num1;
		num1 = num2;
		num2 = fib + num1;
		printf("%ld", fib);
	}
	printf("\n");
	return (0);
}
