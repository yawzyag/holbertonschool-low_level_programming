#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int var;

	for (var = 0; var < 10; var++)
	{
		putchar (var % 10 + '0');
	}
	putchar('\n');
	return (0);
}
