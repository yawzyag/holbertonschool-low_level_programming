#include "hash_tables.h"
/**
 * hash_table_print - fills memory whit a constant byte
 * @ht: pointer to enter
 *
 * Return: pointer to memory
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *holi, *tmp;
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