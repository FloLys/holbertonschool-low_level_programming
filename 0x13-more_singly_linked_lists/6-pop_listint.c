#include "lists.h"

/**
* pop_listint - deletes head node
* @head: head with the list
* Return: head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int data;

	if (*head == NULL)
		return (0);

	else
	{
		aux = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(aux);
	}

	return (data);
}
