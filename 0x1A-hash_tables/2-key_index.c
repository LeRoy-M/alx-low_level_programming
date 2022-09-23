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
	unsigned long int index;
	int i;

	index = 5381;
	while((i = *key++))
	{
		index = ((index << 5) + index) + i;
	}

	return (index % size);
}
