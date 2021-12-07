#include "main.h"
/**
 * print_square - Prints a square
 * @size: Parameter
 *
 * Return: 0
 */
void print_square(int size)
{
	int n;
	int i;
	int j;

	n = size;
	if (n >= 1)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
