#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to head of list
 * @n: data
 * Return: a pointer to struct
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	current = malloc(sizeof(listint_t));
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	ptr = *head;
	*head = current;
	current->next = ptr;
	return (current);
}
