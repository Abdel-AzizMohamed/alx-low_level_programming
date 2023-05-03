#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: linked list
 * Return: deleted node data
*/
int pop_listint(listint_t **head)
{
	int data;

	if (!head)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;

	return (data);
}
