#include "lists.h"

/**
 * print_listint - prints out linked list data
 * @h: linked list
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; h->next != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	i++;
	printf("%d\n", h->n);

	return (i);
}
