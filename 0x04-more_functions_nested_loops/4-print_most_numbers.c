#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, except 2 and 4
 */

void print_most_numbers(void)
{
	int number;

	number = 48;

	while (number < 58)
	{
		if (number != '2' && number != '4')
			_putchar(number);
		number++;
	}
	_putchar(10);
}
