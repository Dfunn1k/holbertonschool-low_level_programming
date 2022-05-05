#include "lists.h"

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
