#include "lists.h"

/**
* dlistint_len - counts elements of dlistint_t
* @h: head
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int nodecn;

	for (nodecn = 0; h != NULL; nodecn++)
	{
		h = h->next;
	}
	return (nodecn);
}
