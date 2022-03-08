#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, following by a new line
 */

void print_numbers(void)
{
	int number;

	number = 48;

	while (number < 58)
	{
		_putchar(number);
		number++;
	}
	_putchar(10);
}
