#include "variadic_functions.h"

/**
 * print_strings - print strings whit separator
 * @separator: separator
 * @n: num
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;
	char *ptr;

	/* initialize valist for num number of arguments */
	va_start(varlist, n);
/* access all the arguments assigned to valist */
		for (i = 0; i < n; i++)
		{
			ptr = va_arg(varlist, char *);

			if (ptr)
				printf("%s", ptr);
			else
				printf("%p", ptr);
			if(separator != NULL)
			{
				if (i < (n - 1))
					printf("%s", separator);
			}
		}
		printf("\n");

	/* clean memory reserved for valist */
	va_end(varlist);
}
