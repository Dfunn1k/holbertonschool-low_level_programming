#include "main.h"
/**
 *puts_half - the function prints half of a string
 *@str: pointer parameter
 */
void puts_half(char *str)
{
	int i = 0;
	int c;

	while (str[i] != 0)
	{
		i++;
	}

	c = 0;

	if (i % 2 == 0)
	{
		c = i / 2;
		while (str[c] != 0)
		{
			_putchar(str[c]);
			c++;
		}
	} else
	{
		c = ((i - 1) / 2);
		while (str[c] != 0)
		{
			_putchar(str[c]);
			c++;
		}
	}
	_putchar(10);
}
