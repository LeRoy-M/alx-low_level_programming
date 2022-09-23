#include "hash_tables.h"

/**
 * key_index - Function that gives the index of a key
 *
 * @key: Key passed to hash table as input
 * @size: Size of the array of the hash table
 *
 * Return: Always hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;
	int i;

	hash = 5381;
	while ((i = *key++))
	{
		hash = ((hash << 5) + hash) + i;
	}
	index = hash % size;

	return (index);
}
