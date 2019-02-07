#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		if (var == 'q')
		{
			var++;
		}
		else if (var == 'e')
		{
			var++;
		}
		putchar (var);
	}
	putchar('\n');
	return (0);
}
