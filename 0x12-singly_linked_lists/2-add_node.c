#include "lists.h"

/**
 * list_len - gets the linked list length
 * @h: head of linked list
 * Return: length of linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;


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

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
