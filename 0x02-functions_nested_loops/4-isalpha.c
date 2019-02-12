#include "holberton.h"

/**
* _isalpha - Check if a character is alphanumeric
* @c: charachter to check
*
* Return: 1 if alpha 0 else
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
