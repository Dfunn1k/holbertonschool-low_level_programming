#include "lists.h"

/**
 * list_len - count the number of elements in a list
 * @h: a pointer to struct
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	int count = 0;

	ptr = h;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/**
 * free_list - free a single linked list
 * @head: a pointer to list
 */

void free_list(list_t *head)
{
	list_t *ptr, *ptrbfr;
	size_t n, i;

	n = list_len(head);

	for (i = 0; i < n; i++)
	{
		ptr = head;

		while (ptr->next != NULL)
		{
			ptrbfr = ptr;
			ptr = ptr->next;
		}

		free(ptr->str);
		free(ptr);
		if (i == n - 1)
			head = NULL;
		else
			ptrbfr->next = NULL;
	}
}
