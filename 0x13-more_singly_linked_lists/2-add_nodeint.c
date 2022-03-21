#include "lists.h"

/**
* add_note - adds new node at the beginning of a list_t list
* @head: header with the list
* @str: string
* Return: address of new element or null if fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	(*new_node).str = strdup(str);
	(*new_node).len = strlen(str);
	(*new_node).next = *head;
	*head = new_node;

	return (new_node);
}
