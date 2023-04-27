#include "lists.h"

/**
 * add_node - adds a node to linked list
 * @head: head of linked list
 * @str: node string
 * Return: head of linked list
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
