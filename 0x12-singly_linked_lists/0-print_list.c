#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to struct
 * @return: size_t of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	int count;

	count = 0;
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str ==NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
