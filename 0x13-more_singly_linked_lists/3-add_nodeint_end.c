#include "lists.h"

/**
* add_nodeint_end - adds new node at the end of a listint_t list
* @head: header with the list
* @n: integer
* Return: address of new element or null if fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node;

	if (new_node == NULL)
		return (NULL);

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
