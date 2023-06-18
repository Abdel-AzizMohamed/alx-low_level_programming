#include "lists.h"


/**
 * sum_dlistint - gets the sum of all nodes data
 * @head: head of the given list
 *
 * Return: sum of all nodes data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int result = 0;

	while (temp)
	{
		result += temp->n;
		temp = temp->next;
	}

	return (result);
}
