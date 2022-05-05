#include "lists.h"

/**
* add_dnodeint_end - add new node at end of dlistint_t
* @head: head with the list
* @n: integers
* Return: address of new element or null if fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
