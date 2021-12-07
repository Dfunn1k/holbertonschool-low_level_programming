#include "main.h"
/**
 * print_diagonal - Function to print \ in diagonal
 * @n: Parameter
 * Return: Return value "n"
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n >= 1)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 1 ; j <= i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
