#include "main.h"
/**
 *puts2 - display the characters following by a new line
 *@str: pointer parameter
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		} else
		{
			i++;
		}
	}
	_putchar(10);
}
