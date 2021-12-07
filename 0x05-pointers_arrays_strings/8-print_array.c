#include <stdio.h>
#include "main.h"
/**
 * print_array - Function to print a complete array
 * @a: Parameter
 * @n: Parameter
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n ; b++)
	{
		printf("%d", a[b]);
		if (b == n - 1)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
