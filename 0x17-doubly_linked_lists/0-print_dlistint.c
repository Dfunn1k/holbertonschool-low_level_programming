#include "lists.h"

/**
 * print_dlistint - printf all of elements in a doubly linked list
 * @h: pointer to head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 1;
	const dlistint_t *ptr;

	ptr = h;

	while (ptr->next != NULL)
	{
		nodes++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	printf("%d\n", ptr->n);

	return (nodes);
}
