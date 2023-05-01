#include "lists.h"

/**
 * add_nodeint - add node at the start
 * @head: the given linked list
 * @n: the value of linked list
 * Return: address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
