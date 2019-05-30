#include "hash_tables.h"
/**
 * key_index - bugjh
 * @key: key
 * @size: size of array
 *
 * Return: a pointer to the newly created hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash;
	int i;

	hash = 0;
	for (i = 0; key && key[i]; i++)
		hash = hash_djb2((unsigned char *)key) % size;
	return (hash);
}
