#include "main.h"

/**
 * print_rev - prints a string in revers, following by a new line
 * @s: pointer to string 
 */

void print_rev(char *s)
{
	while (*s != '\0')
		s++;
	
	s--;

	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
