#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var;
	char varA;

	for (var = 0; var < 10; var++)
	{
		putchar (var % 10 + '0');
	}
	for (varA = 'a'; varA <= 'f'; varA++)
	{
		putchar (varA);
	}
	putchar('\n');
	return (0);
}
