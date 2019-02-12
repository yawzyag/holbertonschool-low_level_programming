#include "holberton.h"

/**
* print_last_digit - Prints last digit of the num
*@num: num to check
*
* Return: last digit
*/
int print_last_digit(int num)
{
	int var = num % 10;

	if (var < 0)
	{
		var = -var;
	}
	_putchar('0' + var);
	return (var);
}
