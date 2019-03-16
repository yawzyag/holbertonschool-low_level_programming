#include "variadic_functions.h"

/**
 * print_all - print all type of things whit separator
 * @format: format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *ptr;
	va_list args;

	va_start(args, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			ptr = va_arg(args, char *);

			if (!ptr)
			{
				printf("%p", ptr);
				break;
			}
				printf("%s", ptr);
			break;
		default:
			++j;
			continue;
		}
		if (format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
