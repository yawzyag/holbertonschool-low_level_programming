#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int var1, var2;

	for (var1 = 0; var1 < 100; var1++)
	{
		for (var2 = var1 + 1; var2 < 100; var2++)
		{
			putchar((var1 / 10) + '0');
			putchar((var1 % 10) + '0');
			putchar(' ');
			putchar((var2 / 10) + '0');
			putchar((var2 % 10) + '0');
			if (var1 < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
