#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: linked list
 * Return: deleted node data
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
