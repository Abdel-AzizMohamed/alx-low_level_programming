#include "hash_tables.h"

/**
 * shash_table_create - create orderd hash table
 * @size: size of the table
 *
 * Return: created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **nodes_list;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);

	nodes_list = malloc(sizeof(shash_node_t *) * size);
	if (!nodes_list)
		return (NULL);

	table->size = size;
	table->array = nodes_list;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_ele, *temp;
	unsigned long int index;

	if (!key || !ht || !value)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_ele = malloc(sizeof(shash_node_t));
	if (!new_ele)
		return (0);

	new_ele->value = strdup(value);
	new_ele->key = strdup(key);
	new_ele->next = NULL;

	if (temp)
		temp->next = new_ele;
	else
		temp = new_ele;
	if (!ht->shead)
	{
		ht->shead = new_ele;
		ht->stail = new_ele; 
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_ele->sprev = temp;
		new_ele->snext = temp->snext;

		if (temp->snext == NULL)
			ht->stail = new_ele;
		temp->snext = new_ele;
	}
	return (1);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = ht->shead;

	printf("{");

	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext)
			printf(", ");
		temp = temp->snext;
	}

	printf("}\n");
}

