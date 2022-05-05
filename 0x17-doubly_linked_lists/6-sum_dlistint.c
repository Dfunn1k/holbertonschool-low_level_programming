#include "lists.h"

/**
 * sum_dlistint - calculated the sum of all the data (n) of a list
 * @head: pointer to head of the list
 * Return: the sum of all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr->next != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	sum += ptr->n;
	return (sum);
}
