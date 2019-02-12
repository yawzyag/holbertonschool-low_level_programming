#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int num1 = 1, num2 = 2, fib;

	for (i = 0; i < 98; i++)
	{
		if (i >= 1 && i < 98)
		{
			printf(", ");
		}
		fib = num1;
		num1 = num2;
		num2 = fib + num1;
		putchar(fib + '0');
	}
	printf("\n");
	return (0);
}
