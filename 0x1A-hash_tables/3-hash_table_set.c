#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 *
 * @ht: Hash Table
 * @key: Key for value lookup
 * @value: Value to be stored
 *
 * Return: Always INTEGER
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;

	/* ht->array */
	index = key_index((const unsigned char *) key, ht->size);
	for (i = 0; i != index; i++)
		ht = *ht->array;

	(const)(*ht->array)->key = *key;
	(const)(*ht->array)->value = *value;

	return (1);
}
