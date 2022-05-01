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

	ptr = h;

	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}

	return (nodes);
}
