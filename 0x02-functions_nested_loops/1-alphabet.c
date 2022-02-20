#include "main.h"

/**
 * print_alphabet - display the alphabet
 */

void print_alphabet(void)
{
	int letter = 97;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar(10);
}
