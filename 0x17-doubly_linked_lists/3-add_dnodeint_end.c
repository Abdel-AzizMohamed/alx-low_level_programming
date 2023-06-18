#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of list
 * @n: new node data
 *
 * Return: new node else NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (!*head)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	new_node->n = n;
	new_node->prev = last_node;
	new_node->next = NULL;
	last_node->next = new_node;

	return (new_node);
}
