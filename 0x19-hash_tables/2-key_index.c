#include "hash_tables.h"
/**
 * hash_table_create - bugjh
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash = 5381;
        int i;

	hash = 0;
	i = 0;
        while (key && key[i])
	{
		hash = hash_djb2((unsigned char *)key) % size;
		++i;
	}
        return hash;
}
