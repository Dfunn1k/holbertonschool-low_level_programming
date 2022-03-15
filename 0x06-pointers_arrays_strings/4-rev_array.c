#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array of integers
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int tmp, count, i;

	if (n % 2 == 0)
		count = n / 2;
	else
		count = (n - 1) / 2;

	for (i = 0; i < count; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
