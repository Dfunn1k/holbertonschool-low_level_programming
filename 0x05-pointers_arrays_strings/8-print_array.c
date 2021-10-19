#include <stdio.h>
#include "main.h"
/**
 *print_array - display n characters of an array
 *@a: pointer to array
 *@n: integer
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i == n - 1)
				break;
			printf(", ");
		}
		printf("\n");
	} else
	{

	}
}
