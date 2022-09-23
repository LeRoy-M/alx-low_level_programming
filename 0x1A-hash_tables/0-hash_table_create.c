#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 *
 * @size: Size of the array
 *
 * Return: Always pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht_size;

	ht_size = malloc(sizeof(hash_table_t));
	if (ht_size == NULL)
		return (NULL);

	ht_size->size = size;
	ht_size->array = NULL;

	return (ht_size);
}
