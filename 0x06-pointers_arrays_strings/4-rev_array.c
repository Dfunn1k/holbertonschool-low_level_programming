#include "main.h"
/**
 * reverse_array - Function to concatenates two strings
 * @a: Parameter
 * @n: Parameter
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
