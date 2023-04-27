#include "lists.h"

/**
 * print_list - prints out linked list data
 * @h: head of linked list
 * Return: number of linked lists
*/
size_t print_list(const list_t *h)
{
	int len = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		len++;
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	len++;

	return (len);
}
