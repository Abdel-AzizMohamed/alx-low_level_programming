#include "lists.h"


/**
 * get_dnodeint_at_index - get node at given index
 * @head: head of the list
 * @index: given index
 *
 * Return: node at given index else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;

	for (i = 0; temp; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
