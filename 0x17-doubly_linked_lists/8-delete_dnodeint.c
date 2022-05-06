#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index
* @head: head with the list
* @index: index of node that should be deleted, starts at 0
* Return: 1 if success, -1 if fails.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
int pop_listint(listint_t **head)
{
	listint_t *del_node;
	int data;

	if (*head == NULL)
		return (0);
	

	if (del_node->next != NULL)
		del_node->next->prev = del_node->prev;

	if (del_node->prev != NULL)
		del_node->prev->next = del_node->next;

	else
	{
		aux = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(del);
	}

	return (data);
}
