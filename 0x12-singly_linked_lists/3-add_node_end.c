#include "lists.h"

/**
* add_node_end - adds new node at the end of a list_t list
* @head: header with the list
* @str: string
* Return: address of new element or null if fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	(*new_node).str = strdup(str);
	(*new_node).len = strlen(str);

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;

		new_node->next = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
