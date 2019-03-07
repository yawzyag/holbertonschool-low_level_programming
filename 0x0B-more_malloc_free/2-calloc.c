#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - fills memory whit a constant byte
 * @b: pointer to enter
 * @c: constant byte for use
 * @len: number of bytes
 *
 * Return: pointer to memory
 */
void  *_memset(void *b, int c, unsigned int len)
{
	unsigned char *p = b;

	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}

	return (b);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of type
 *
 * Return: allocate memory address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int size_t;
	unsigned int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	size_t = nmemb * size;

	p = malloc(size_t);

	if (!p)
		return (NULL);

	return (_memset(p, 0, size_t));
}
