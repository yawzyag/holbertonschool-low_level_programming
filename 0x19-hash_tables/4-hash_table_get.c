#include "hash_tables.h"

/**
 * hash_table_get - fills memory whit a constant byte
 * @ht: pointer to enter
 * @key: constant byte for use
 *
 * Return: pointer to memory
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int juanito;
	hash_node_t *holi;

	if (!ht)
		return (NULL);

	juanito = hash_djb2((unsigned char *)key) % ht->size;
	holi = ht->array[juanito];

	while (holi)
	{
		if (strcmp(holi->key, key) == 0)
			break;
		holi = holi->next;
	}
	if (!holi)
		return (NULL);
	return (holi->value);
}
