#include "lists.h"

/**
* add_dnodeint - add new node at beginning of dlistint_t
* @head: head with the list
* @n: integers
* Return: adress of new element or null if fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = *head;
	*head = new_node;
	return (new_node);
}
