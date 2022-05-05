#include "lists.h"

/**
 * add_dnodeint - add node at beginning of a list
 * @head: pointe to pointer to head
 * @n: the value
 * Return: address of the node added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->next = ptr;
	ptr->prev = new;
	*head = new;

	return (new);
}
