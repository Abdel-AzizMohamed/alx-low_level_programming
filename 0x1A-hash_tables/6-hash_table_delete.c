#include "hash_tables.h"


/**
 * hash_table_delete - delete(free) a hash table
 * @ht: given hash table to delete(free)
 *
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *table;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		table = ht->array[i];
		while (table)
		{
			free(table->key);
			free(table->value);
			temp = table;
			table = table->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
