#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int rows, tmp, spaces, hash;

	tmp = size;

	if (size <= 0)
		_putchar(10);

	else
	{
		for (rows = 0; rows < size; rows++)
		{
			spaces = tmp - 1;

			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}

			tmp -= 1;
			hash = rows + 1;

			while (hash > 0)
			{
				_putchar('#');
				hash--;
			}

			_putchar(10);
		}
	}
}
