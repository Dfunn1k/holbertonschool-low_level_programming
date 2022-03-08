#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: n times that should be print '_'
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar(10);

}
