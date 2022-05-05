#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
* @head: head with the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
