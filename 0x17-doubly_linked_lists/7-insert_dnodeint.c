#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at the index
 * @h: pointer to pointer to head
 * @idx: index
 * @n: value
 * Return: address to node added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new, *tmp;
	unsigned int i = 0;
	size_t nodes;

	nodes = dlistint_len(*h);

	if (*h == NULL)
		return (NULL);
	if (idx >= nodes)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == nodes - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	ptr = *h;

	for (i = 0; i < idx; i++)
		ptr = ptr->next;

	tmp = ptr;
	ptr = ptr->prev;
	ptr->next = new;
	new->n = n;
	new->next = tmp;
	new->prev = ptr;

	return (new);
}
