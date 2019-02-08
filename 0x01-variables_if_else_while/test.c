#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			num3 = num2 +1;
			putchar((num1/100) + '0');
			putchar((num2/10) + '0');
			putchar((num3%10) + '0');
			putchar(',');
		}
	}
	return (0);
}
