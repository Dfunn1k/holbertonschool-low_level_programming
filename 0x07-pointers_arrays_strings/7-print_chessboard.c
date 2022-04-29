#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: a pointer to 2d array
 */

void print_chessboard(char (*a)[8])
{
	int rows, column;

	for (rows = 0; rows < 8; rows++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[rows][column]);
		_putchar(10);
	}
}
