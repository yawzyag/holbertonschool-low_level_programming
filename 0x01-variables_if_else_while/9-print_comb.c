#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int var = 0;
	char varA = ',';
	char varB = ' ';

	if (var < 10)
	{
		putchar((var % 10) + '0');
		putchar(varA);
		putchar(varB);
		var++;
	}
	else
	{
		putchar('\n');
	}
	return (0);
}
