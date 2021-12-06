#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function to print lower alphabet
 *@n: Parameter
 * Return: Return value "n"
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}

}
