#include <stdlib.h>

/**
 * _atoi - string to int
 *@s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	return(strtol(s, (char **)NULL, 10));
}
