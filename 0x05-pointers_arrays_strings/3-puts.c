#include "main.h"
#include <string.h>
/**
 *_puts - display all string following by a new line
 *@str: a string
 *
 *
 *Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
