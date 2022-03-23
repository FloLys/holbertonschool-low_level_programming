#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: head with the list
*/
void free_listint(listint_t *head)
{
	listint_t aux = head;

	while (head != NULL)
	{
		head = head->next;
		free(aux);
	}
}
