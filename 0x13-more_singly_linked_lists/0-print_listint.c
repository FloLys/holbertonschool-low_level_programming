#include "lists.h"

/**
* print_listint - prints all elements of listint_t list
* @h: header with the list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nodecn = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);

		h = h->next;
		nodecn++;
	}

	return (nodecn);
}
