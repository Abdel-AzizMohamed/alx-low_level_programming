#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	*hash_table_t table;
	**hash_node_t nodes_list;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL)

	nodes_list = malloc(sizeof(*hash_node_t) * size)
	if (!nodes_list)
		return (NULL)

	table->size = size;
	table->array = nodes_list;

	return (table)
}
