#include "lists.h"

/**
 * sum_listint - get the sum of all nodes
 * @head: linked list
 * Return: the sum of all nodes
*/
int sum_listint(listint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
