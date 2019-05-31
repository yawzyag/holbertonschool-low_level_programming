#include "hash_tables.h"

/**
 * hash_table_create - bugjh
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *holi;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	holi = malloc(sizeof(hash_table_t));
	if (!holi)
		return (NULL);

	holi->size = size;
	holi->array = malloc(size * sizeof(hash_node_t *));
	if (!holi->array)
	{
		free(holi);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		holi->array[i] = NULL;
	
	return (holi);
}
