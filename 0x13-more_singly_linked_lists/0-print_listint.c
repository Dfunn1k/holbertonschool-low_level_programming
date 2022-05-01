#include "lists.h"

/**
 * print_listint - count the number of nodes
 * @h: pointer to head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t nodes;

	ptr = h;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
