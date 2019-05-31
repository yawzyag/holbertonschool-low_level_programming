#include "hash_tables.h"

/**
 * creat_node - fills memory whit a constant byte
 * @key: pointer to enter
 * @val: constant byte for use
 *
 * Return: pointer to memory
 */
shash_node_t *creat_node(const char *key, const char *val)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
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

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *holi;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	holi = malloc(sizeof(shash_table_t));
	if (!holi)
		return (NULL);

	holi->size = size;
	holi->array = malloc(size * sizeof(shash_node_t *));
	if (!holi->array)
	{
		free(holi);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		holi->array[i] = NULL;

	return (holi);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *holi, *node;
	unsigned long int hash;

	if (!ht || !key || !value)
		return (0);
	if (strcmp(key, "") == 0)
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

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int juanito;
	shash_node_t *holi;

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

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *holi = NULL;
	int num = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		holi = ht->array[i];

		while (holi)
		{
			if (num)
				printf(", ");
			printf("'%s': '%s'", holi->key, holi->value);
			num++;
			holi = holi->next;
		}
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *holi = NULL;
	int num = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		holi = ht->array[i];

		while (holi)
		{
			if (num)
				printf(", ");
			printf("'%s': '%s'", holi->key, holi->value);
			num++;
			holi = holi->next;
		}
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *holi, *tmp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			holi = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = holi;
		}
	}
	free(ht->array);
	free(ht);
}
