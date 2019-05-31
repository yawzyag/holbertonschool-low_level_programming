#include "hash_tables.h"

/**
 * hash_table_print - fills memory whit a constant byte
 * @ht: pointer to enter
 *
 * Return: pointer to memory
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *holi = NULL;
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
