#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: head with the list
* @idx: index of list where new nodes go, start 0
* @n: integer
* Return: address of new node or null if fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node;
	unsigned int cn = 1;

	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);
	
	(*new_node).n = n;
	last_node = *head;

	if (last_node == NULL)
	{
		if (idx == 0)
		{
			new_node->next = last_node;
			*head = new_node;
			return (new_node);
		}
	else
		return (NULL);
	}

	while (cn < idx)
	{
		if (last_node->next != NULL)
		{
			last_node = last_node->next;
			cn++;
		}
		else
			return (NULL);
	}
		new_node->next = last_node->next;
		last_node->next = new_node;

	return (new_node);
}
