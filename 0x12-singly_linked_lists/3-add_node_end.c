#include "lists.h"

/**
 * add_node_end - adds a node at end to linked list
 * @head: head of linked list
 * @str: node string
 * Return: head of linked list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node, *tmp = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
