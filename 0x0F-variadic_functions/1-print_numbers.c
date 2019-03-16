#include "variadic_functions.h"

/**
 * print_numbers - print numbers whit separator
 * @separator: separator
 * @n: num
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;

	/* initialize valist for num number of arguments */
	if (n)
	{/* access all the arguments assigned to valist */
		va_start(varlist, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(varlist, int));
			if (separator != NULL)
			{
				if (i < (n - 1))
					printf("%s", separator);
			}
		}
		printf("\n");
	}

	/* clean memory reserved for valist */
	va_end(varlist);
}
