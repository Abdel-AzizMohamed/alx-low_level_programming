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
	new_ele->key = strdup(key);
	new_ele->value = strdup(value);
	new_ele->next = NULL;

	index = key_index((unsigned char *) key, ht->size);

	if (!ht->array[index])
		ht->array[0] = new_ele;
	else
		ht->array[index] = new_ele;

	return (1);
}
