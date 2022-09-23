#include <stdlib.h>
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
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	/*new_hash_table->size = size;*/
	new_hash_table->array = malloc(size * sizeof(hash_node_t));

	if (new_hash_table->array == NULL)
		return (NULL);

	return (new_hash_table);
}
