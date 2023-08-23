#include "lists.h"

/**
 * get_nodeint_at_index - get the node at specific index
 * @head: linked list
 * @index: the node index
 * Return: the node at the given index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);

	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	return (tmp);
}
