#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 *
 * @ht: Hash table previously created
 * @key: String used to generate hash code
 * @value: Of associated key
 *
 * Return: Always '0' or '1'
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *array_node;

	/* hash = hash_djb2(key); */
	index = key_index((const unsigned char *)key, ht->size);

	array_node = malloc(sizeof(hash_node_t));
	if (array_node == NULL)
		return (0);
	array_node->key = (char *)key;
	array_node->value = (char *)value;
	array_node->next = ht->array[index];
	ht->array[index] = array_node;

	return (1);
}
