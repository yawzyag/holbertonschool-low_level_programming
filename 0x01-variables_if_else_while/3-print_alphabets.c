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

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar (var);
	}
	for (varA = 'A'; varA <= 'Z'; varA++)
	{
		putchar (varA);
	}
	putchar('\n');
	return (0);
}
