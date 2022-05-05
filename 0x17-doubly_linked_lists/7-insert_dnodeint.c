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

	if (idx >= nodes)
		return (NULL);

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
