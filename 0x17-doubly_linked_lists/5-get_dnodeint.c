#include "lists.h"

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
