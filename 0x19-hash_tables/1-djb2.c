#include "hash_tables.h"
/**
 * hash_table_create - bugjh
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
        int c;

        while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

        return hash;
}
