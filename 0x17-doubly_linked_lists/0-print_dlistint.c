#include "lists.h"

/**
* print_dlistint - print elements of dlistint_t
* @h: head
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int nodecn;

	for (nodecn = 0; h != NULL; nodecn++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (nodecn);
}
