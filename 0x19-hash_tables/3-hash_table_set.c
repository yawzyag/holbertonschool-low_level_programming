#include "hash_tables.h"

/**
 * _strcmp - show a table whit 9 multiplication
 * @s1: string1
 * @s2: string2
 *
 * Return: number acci code
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (*s1 && *s2) && *s1 == *s2; i++)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}


/**
 * add_hash_table - fills memory whit a constant byte
 * @ht: pointer to enter
 * @holi: constant byte for use
 *
 * Return: pointer to memory
 */
void add_hash_table(hash_table_t *ht, hash_node_t *holi)
{
	unsigned long int hash;
	hash_node_t *tmp;

	hash = (hash_djb2((unsigned char *)holi->key)) % (ht->size);
	tmp = ht->array[hash];

	if (ht->array[hash])
	{
		while (tmp)
		{
			if (_strcmp(tmp->key, holi->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (!tmp)
		{
			holi->next = ht->array[hash];
			ht->array[hash] = holi;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(holi->value);
			free(holi->value);
			free(holi->key);
			free(holi);
		}
	}
	else
	{
		holi->next = NULL;
		ht->array[hash] = holi;
	}
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
	hash_node_t *holi;

	if (!ht)
		return (0);

	holi = malloc(sizeof(hash_node_t));
	if (!holi)
		return (0);
	holi->key = strdup(key);
	holi->value = strdup(value);

	add_hash_table(ht, holi);

	return (0);
}
