#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head of list
 * @n: new node data
 *
 * Return: new node else NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (*head)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;	
	}

	return (new_node);
}
