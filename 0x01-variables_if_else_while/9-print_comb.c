#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int var;
	char varA = ',';
	char varB = ' ';

	for (var = 0; var < 10; var++)
	{
		putchar (var % 10 + '0');
		if(var < 9)
		{
			putchar(varA);
			putchar(varB);
		}
	}
	putchar('\n');
	return (0);
}
