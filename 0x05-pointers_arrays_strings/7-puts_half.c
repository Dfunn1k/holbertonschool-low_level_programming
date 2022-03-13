#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int count, limit;
	char *cp;

	count = 0;
	cp = str;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	if (count % 2 == 0)
	{
		limit = count / 2;
		cp += limit;
	}
	else
	{
		limit = (count - 1) / 2;
		cp += limit + 1;
	}
	
	while (*cp != '\0')
	{
		_putchar(*cp);
		cp++;
	}
	_putchar(10);
}
