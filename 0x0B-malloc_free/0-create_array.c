#include "main.h"
#include "stdlib.h"

/**
 * create_array - creates an array of chars, and initializes with c
 * @size: the size of array
 * @c: the specific character
 * Return: a pointer to memory allocated
 */

char *create_array(unsigned int size, char c)
{
	char *pc;
	unsigned int i;

	if (size == 0)
		return (0);

	pc = malloc(size * sizeof(char));

	if (pc == 0)
		return (0);

	for (i = 0; i < size; i++)
		pc[i] = c;

	return (pc);
}
