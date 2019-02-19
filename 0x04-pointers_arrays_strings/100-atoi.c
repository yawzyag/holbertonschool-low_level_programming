#include <stdlib.h>

/**
 * _atoi - string to int
 *@s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int result;
	int plus;

	result = 0;
	plus = 1;
	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
			plus = plus * -1;
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + ((*s) - '0');
		s++;
	}
	return (result * plus);
}
