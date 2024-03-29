#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: Size of the array
 *
 * Return: Always pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_node_t) * size);
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = NULL;

	return (ht);
}
