#include "lists.h"

/**
 * free_list - frees out a linked list
 * @head: head of linked list
 * Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (tmp->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
