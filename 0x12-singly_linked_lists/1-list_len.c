#include "lists.h"

/**
 * list_len - gets the linked list length
 * @h: head of linked list
 * Return: length of linked list
*/
size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		len++;
		h = h->next;
	}
	len++;

	return (len);
}
