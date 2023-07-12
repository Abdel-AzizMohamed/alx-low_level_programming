#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: given hash table
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int sep = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (sep == 1)
			{
				printf(", ");
				sep = 0;
			}
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next == NULL)
			{
				sep = 1;
				temp = temp->next;
				continue;
			}
			temp = temp->next;
			printf(", ");
		}
	}
	printf("}\n");
}
