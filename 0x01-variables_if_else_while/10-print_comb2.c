#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int var;

	for (var = 0; var < 100 ; var++)
	{
		putchar((var / 10) + '0');
		putchar((var % 10) + '0');
		if(var < 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
