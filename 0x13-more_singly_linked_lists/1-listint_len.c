#include "lists.h"

/**
 * listint_len - return the number of nodes in a list
 * @h: a pointer to list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t nodes = 1;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}

	return (nodes);
}
