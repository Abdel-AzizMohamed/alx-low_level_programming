#include "lists.h"

/**
 * listint_len - give the linked list length
 * @h: linked list
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; h->next != NULL; i++)
		h = h->next;
	i++;

	return (i);
}
