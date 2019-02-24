#include <stdio.h>

/**
 * print_buffer - show a table whit 9 multiplication
 * @b: buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	while (i > size)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{ printf("%02x", (unsigned char)*(b + j)); }
			else
			{
				printf("  ");
			}
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
			{
				break;
			}
			if ((*(b + j) >= ' ') && (*(b + j) <= '~'))
			{
				putchar(*(b + j));
			}
			else
			{
				printf(".");
			}
		}
		i += 10;
		if (i < size)
		{
			printf("\n");
		}
	}
	printf("\n");
}
