#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of the list
* @head: head with the list
* @index: index of node starting at 0
* Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cn = 0;

	if (head == NULL)
		return (NULL);

	while (cn < index)
	{
		if (head->next == NULL)
		{
			head = head->next;
			cn++;
		}
		else
			return (NULL);
	}

	return (head);
}
