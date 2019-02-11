#include "holberton.h"

int print_last_digit(int num)
{
	int var;

	if(num < 0)
	{
		num = -num;
	}
	var = num % 10;
	_putchar('0' + var);
	return (var);
}
