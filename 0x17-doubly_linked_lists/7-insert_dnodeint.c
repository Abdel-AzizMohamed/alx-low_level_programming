#include "lists.h"


/**
 * insert_dnodeint_at_index - add node at given index
 * @h: head of the given node
 * @idx: given index
 * @n: data of the new_node
 *
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *fr_node = *h, *sec_node = NULL;
	unsigned int i;

	if (!*head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	for (i = 0; fr_node; i++)
	{
		if (i == idx - 1)
		{
			sec_node = fr_node->next;
			break;
		}
		fr_node = fr_node->next;
	}
	if (!sec_node)
		return (NULL);

	fr_node->next = new_node;
	new_node->prev = fr_node;
	new_node->next = sec_node;
	sec_node->prev = new_node;

	return (new_node);
}
