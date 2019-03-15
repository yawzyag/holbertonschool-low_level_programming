#include "variadic_functions.h"

/**
 * sum_them_all - summ all arguments
 * @n: num
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varlist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	/* initialize valist for num number of arguments */
	va_start(varlist, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
		sum += va_arg(varlist, int);

	/* clean memory reserved for valist */
	va_end(varlist);

	return (sum);
}
