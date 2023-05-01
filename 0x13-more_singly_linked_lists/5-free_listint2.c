#include "lists.h"

/**
 * free_listint2 - frees out linked list
 * @head: linked list
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (tmp->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
