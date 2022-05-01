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
