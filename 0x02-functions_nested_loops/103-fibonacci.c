#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int num1 = 1, num2 = 2, fib, sum = 0;

	for (i = 0; i < 32; i++)
	{
		fib = num1;
		num1 = num2;
		num2 = fib + num1;
		if(fib % 2 == 0)
		{
			if (i >= 2 && i < 32)
			{
				printf(", ");
			}
			sum = fib + sum;
			printf("%ld", fib);
		}
	}
	printf("\n");
	return (0);
}
