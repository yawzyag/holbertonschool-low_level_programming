#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: name of person
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
