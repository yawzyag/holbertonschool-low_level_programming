#include "hash_tables.h"

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
 * hash_table_create - bugjh
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *holi;

	if (size < 1)
		return (NULL);

	holi = malloc(sizeof(hash_table_t));
	if (!holi)
		return (NULL);

	holi->array = (hash_node_t **) malloc(size * sizeof(hash_node_t));
	if (!holi->array)
		return (NULL);

	_memset(holi->array, 0, sizeof(holi));

	holi->size = size;

	return (holi);
}
