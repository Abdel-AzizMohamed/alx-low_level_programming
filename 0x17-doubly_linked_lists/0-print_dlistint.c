#include "lists.h"

/**
 * print_dlistint - prints out double linked list
 * @h: head of list
 *
 * Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int len;
	const dlistint_t *temp = h;

	for (len = 0; temp; len++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (len);
}
