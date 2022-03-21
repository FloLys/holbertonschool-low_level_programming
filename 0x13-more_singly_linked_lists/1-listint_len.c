#include "lists.h"

/**
* listint_len - returns number of elements of listint_t list
* @h: header with the list
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int nodecn = 0;

	while (h != NULL)
	{
		h = h->next;
		nodecn++;
	}

	return (nodecn);
}
