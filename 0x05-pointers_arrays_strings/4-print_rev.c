#include "main.h"
/**
 *print_rev - display all string in reverse following by a new line
 *@s: a string
 *
 *
 *Return: void
 */
void print_rev(char *s)
{
	int e = 0;

	while (s[e] != 0)
	{
		e++;
	}

	do {
		_putchar(s[e]);
		e--;
	} while (s[e] != 0);

	_putchar(10);
}
