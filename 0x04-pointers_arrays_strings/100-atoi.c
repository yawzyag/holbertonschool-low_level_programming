#include <stdlib.h>

/**
 * _atoi - string to int
 *@s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int sum = 0, i = 0, neg = 1;

	if (s[i] != 0)
	{
		for (i = 0; (s[i] < '0' || s[i] > '9'); i++)
		{
			if (s[i] == '-')
				neg = neg * -1;
		}
		for (; (s[i] >= '0' && s[i] <= '9'); i++)
		{
			sum = sum * 10 - (s[i] - '0');
		}
	}
	neg = neg * -1;
	return (sum * neg);
}
