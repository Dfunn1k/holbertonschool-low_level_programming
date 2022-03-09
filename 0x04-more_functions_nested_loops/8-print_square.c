#include "main.h"

/**
 * print_square - prints a square, following by a new line
 * @size: is the size of the square
 */

void print_square(int size)
{
	int row, cols;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (row = 0; row < size; row++)
		{
			for (cols = 0; cols < size; cols++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
