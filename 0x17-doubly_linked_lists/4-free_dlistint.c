#include "lists.h"


/**
 * free_dlistint - free out double linked list
 * @head: the head of the list
 *
 * Return: Nothing.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
