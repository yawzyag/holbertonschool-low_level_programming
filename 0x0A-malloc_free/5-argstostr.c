#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr- Entry point
 * @ac: comand count
 * @av: command passed
 *
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	char *ptr;
	int count2 = 0;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}

	ptr = malloc(sizeof(*ptr) * (count + ac + 1));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; (av[i][j] != '\0'); j++)
		{
			ptr[count2] = av[i][j];
			count2++;
		}
		ptr[count2++] = '\n';
	}

	return (ptr);
}
