#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf('\n');

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
