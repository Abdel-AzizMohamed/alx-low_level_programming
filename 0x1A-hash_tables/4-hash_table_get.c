#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: given hash table
 * @key: given key
 *
 * Return: value that are associated with the key else NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key || !ht)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
