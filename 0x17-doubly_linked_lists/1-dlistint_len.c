#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: pointer to hed of list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;

	ptr = h;
	if (ptr->next == NULL)
		return 1;
	else
		return 1 + dlistint_len(ptr->next);
}
