# Variadics Functions

----
## What are Variadics Functions in C?
see [Variadics Functions](https://cs.nyu.edu/courses/spring12/CSCI-GA.3033-014/Assignment1/function_pointers.html)

> Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter.

----
## usage example

```
#include <stdarg.h>
```

**va_list**	type for iterating argumens

**va_start**	Start iterating arguments with a va_list

**va_arg**	Retrieve an argument

**va_end**	Free a va_list

**va_copy**	Copy contents of one va_list to another

----
