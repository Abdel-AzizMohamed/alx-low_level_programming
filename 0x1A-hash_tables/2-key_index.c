#include "hash_tables.h"


/**
 * key_index - gets the index of a key.
 * @key: given key
 * @size: the size of the hash table array
 *
 * Return: index of the given key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
