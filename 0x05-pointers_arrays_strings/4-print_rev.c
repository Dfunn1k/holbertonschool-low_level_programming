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
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	e -= 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar(10);
}
