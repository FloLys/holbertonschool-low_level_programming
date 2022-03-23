#include "lists.h"

/**
* sum_listint - sums all the ints data of list
* @head: head with the list
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
			sum += head->n;
			head = head->next;
	}

	return (sum);
}
