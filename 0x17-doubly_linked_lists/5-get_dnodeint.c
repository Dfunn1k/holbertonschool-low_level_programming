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
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked lists
 * @head: pointer to head of the list
 * @index: nth nodo
 * Return: adrress of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;
	size_t nodes;

	nodes = dlistint_len(head);

	if (index >= nodes)
		return (NULL);

	ptr = head;

	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
