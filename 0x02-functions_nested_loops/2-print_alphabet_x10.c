#include "main.h"

/**
 * print_alphabet_x10 - display the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int letter = 97, i;

	for (i = 0; i < 10; i++)
	{
		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		letter = 97;
		_putchar(10);
	}
}
