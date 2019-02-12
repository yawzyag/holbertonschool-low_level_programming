#include "holberton.h"

/**
* print_last_digit - Prints last digit of the num
*@num: num to check
*
* Return: last digit
*/
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = -num;
	}
	_putchar('0' + (num % 10));
	return (num % 10);
}
