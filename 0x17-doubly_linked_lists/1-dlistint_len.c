#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	int len;
	const dlistint_t *temp = h;

	for (len = 0; temp; len++)
		temp = temp->next;
	return (len);
}
