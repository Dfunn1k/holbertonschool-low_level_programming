#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: pointer to hed of list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	if (ptr->next == NULL)
		return (1);
	else
		return (1 + dlistint_len(ptr->next));
}

/**
 * free_dlistint - function that free a doubly linked list
 * @head: pointer to head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *tmp;
	size_t nodes, i;

	nodes = dlistint_len(head);
	ptr = head;

	for (i = 0; i < nodes; i++)
	{
		while (ptr->next != NULL)
		{
			tmp = ptr;
			ptr = ptr->next;
		}

		free(ptr);

		if (i == nodes - 1)
			head = NULL;
		else
			tmp->next = NULL;

		ptr = head;
	}
}
