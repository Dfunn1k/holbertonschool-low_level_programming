#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int row, spaces;

	spaces = 0;
	if (n <= 0)
		_putchar(10);
	else
	{
		for (row = 1; row < n + 1; row++)
		{
			while (spaces < row - 1)
			{
				_putchar(' ');
				spaces++;
			}
			spaces = 0;
			_putchar('\\');
			_putchar(10);
		}
	}
}
