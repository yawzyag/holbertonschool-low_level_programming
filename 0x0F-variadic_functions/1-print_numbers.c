#include "variadic_functions.h"

/**
 * sum_them_all - summ all arguments
 * @n: num
 *
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;

	/* initialize valist for num number of arguments */
	va_start(varlist, n);
	if (n && separator)
	{/* access all the arguments assigned to valist */
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(varlist, int));
			if(i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
	}

	/* clean memory reserved for valist */
	va_end(varlist);
}
