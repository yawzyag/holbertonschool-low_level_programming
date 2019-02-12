#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 1, num2 = 2, fib, sum;

	for(sum = 0; sum < 4000000; sum++)
	{
		fib = num1;
		num1 = num2;
		num2 = fib + num1;
		if (fib % 2 == 0)
		{
			if (sum > 2 && sum < 4000000)
			{
				printf(", ");
			}
			sum = fib + sum;
			printf("%ld", fib);
		}
		else
		{
			sum++;
		}

	}
	printf("\n");
	return (0);
}
