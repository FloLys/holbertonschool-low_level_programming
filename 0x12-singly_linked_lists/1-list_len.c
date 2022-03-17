#include "lists.h"

/**
* list_len - counts number of elements in a linked list_t list
* @h: header with the list
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int cn = 0;

	while (h != NULL)
	{
		h = h->next;
		cn++;
	}

	return (cn);
}
