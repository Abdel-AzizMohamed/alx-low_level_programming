#include "hash_tables.h"


/**
 * hash_table_set - insert|update element to hash table
 * @ht: table to insert into
 * @key: given element key
 * @value: given element value
 *
 * Return: 1 on success else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ele;
	unsigned long int index;

	if (!key)
		return (0);

	new_ele = malloc(sizeof(hash_node_t));
	if (!new_ele)
		return (0);
	new_ele->value = strdup(value);
	if (!(new_ele->value))
	{
		free(new_ele);
		return (0);
	}

	index = key_index((unsigned char *) key, ht->size);
	
	new_ele->key = strdup(key);
	if (!(new_ele->key))
	{
		free(new_ele);
		free(new_ele->value);
		return (0);
	}
	new_ele->next = ht->array[index];

	ht->array[index] = new_ele;

	return (1);
}
