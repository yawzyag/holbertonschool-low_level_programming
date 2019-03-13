#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: name of person coincidence
 */
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}
