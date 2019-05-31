#include "hash_tables.h"

/**
 * creat_node - fills memory whit a constant byte
 * @key: pointer to enter
 * @val: constant byte for use
 *
 * Return: pointer to memory
 */
hash_node_t *creat_node(const char *key, const char *val)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
		return (0);
	new_node->value = strdup(val);
	if (!new_node->value)
		return (0);
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - fills memory whit a constant byte
 * @ht: pointer to enter
 * @key: constant byte for use
 * @value: number of bytes
 *
 * Return: pointer to memory
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *holi, *node;
	unsigned long int hash;

	if (!ht || !key || !value)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	if (strcmp(value, "") == 0)
		return (0);

	hash = key_index((unsigned char *)key, ht->size);
	if (!ht->array[hash])
	{
		node = creat_node(key, value);
		if (!node)
			return (0);
		ht->array[hash] = node;
		return (1);
	}

	for (holi = ht->array[hash]; holi;
		 holi = holi->next)
	{
		if (strcmp(holi->key, key) == 0)
		{
			free(holi->value);
			holi->value = strdup(value);
			if (!holi->value)
				return (0);
			return (1);
		}
	}
	node = creat_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[hash];
	ht->array[hash] = node;

	return (1);
}
