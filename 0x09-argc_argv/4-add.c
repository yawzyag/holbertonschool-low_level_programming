#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: comand count
 * @argv: command passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, add = 0, num;
	char *numptr;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &numptr, 10);
		if (*numptr)
		{
			printf("Error\n");
			return (1);
		}
		add += num;
	}
	printf("%d\n", add);

	return (0);
}
