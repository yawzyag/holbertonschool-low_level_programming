#include "holberton.h"
#include <stdlib.h>

/**
 * _memcpy - copy memory whit a constant byte
 * @dest: dest buffer to copy
 * @src: source to copy
 * @n: number of bytes
 *
 * Return: pointer to memory s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pdest = dest;
	char *psrc = src;

	for (i = 0; i < n ; i++)
		*(pdest + i) = *(psrc + i);

	return (dest);
}

/**
 * _realloc - reallocates a memory block
 * @ptr: ptr to memory previus allocated
 * @old_size: old size in memory
 * @new_size: new size in memory
 *
 * Return: pointer realloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}

	ptr_new = malloc(new_size);
	if (ptr_new != NULL)
	{
		_memcpy(ptr_new, ptr, old_size);
		free(ptr);
	}
	return (ptr_new);
}
