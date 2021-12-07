#include "main.h"
/**
 * print_line - Function to print table
 * @n: Parameter
 * Return: Return value "n"
 */
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
