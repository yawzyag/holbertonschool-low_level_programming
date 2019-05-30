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

	if (size < 1)
		return (NULL);

	holi = malloc(sizeof(hash_table_t));
	if (!holi)
		return (NULL);

	holi->array = (hash_node_t**) malloc(size * sizeof(hash_node_t));
	if (!holi->array)
		return (NULL);

	memset(holi->array, 0, sizeof(holi));

	holi->size = size;

	return (holi);
}
