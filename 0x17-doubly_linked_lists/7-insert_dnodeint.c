#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head with the list
* @idx: index of list where new nodes go, start 0
* @n: integer
* Return: address of new node or null if fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node;
	unsigned int cn;

	if (new_node == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	
	(*new_node).n = n;
	last_node = *h;
/*case when list its empty and we add only one node*/
/*	if (last_node == NULL)
	{*/
	if (idx == 1)
	{
		new_node->next = last_node;
		*h = new_node;
		return (new_node);
	}
/*	else
		return (NULL);
	}*/
/*case insert in the middle*/
	for (cn = 1; cn < idx; cn++)
	{
		if (last_node->next == NULL)
			break;
		last_node = last_node->next;
	}
	if (cn == idx)
	{
/* 1. Make next of new node as next of prev_node */
		new_node->next = last_node->next;
/* 2. Make prev_node as previous of new_node */
		new_node->prev = last_node;
		if (last_node->next != NULL)
			last_node->next->prev = new_node;
/* 3. Make the next of prev_node as new_node */
		last_node->next = new_node;
	}
	return (new_node);
}
