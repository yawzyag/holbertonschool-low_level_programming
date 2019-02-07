#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int var;
	int length = 10;

	for (var = 0; var < length ; var++)
	{
		putchar((var % 10) + '0');
		if (var < (length - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
