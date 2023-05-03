#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: linked list
 * @idx: index to insert in
 * @n: value of the new node
 * Return: the new inserted node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *tmp = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;

	for (i = 0; i < idx; i++)
	{
		if (tmp == NULL)
			return (NULL);

		if (i < idx - 1)
			prev_node = tmp;
		tmp = tmp->next;
	}

	prev_node->next = new_node;
	new_node->next = tmp;

	return (*head);
}
