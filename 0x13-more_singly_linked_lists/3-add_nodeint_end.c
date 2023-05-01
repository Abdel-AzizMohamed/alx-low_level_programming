#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: the given linked list
 * @n: the value of linked list
 * Return: address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (*head);
}
