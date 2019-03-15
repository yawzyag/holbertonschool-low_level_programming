#include "variadic_functions.h"

/**
 * print_all - print all type of things whit separator
 * @format: format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int j = 0, i, c;
	float f;
	char *ptr;
	va_list args;

	va_start(args, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case 'i':
			i = va_arg(args, int);
			printf("%i", i);
			break;
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			ptr = va_arg(args, char *);
			if (ptr)
				printf("%s", ptr);
			else
				printf("%p", ptr);
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
