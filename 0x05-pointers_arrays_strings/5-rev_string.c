#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to string
 */

void rev_string(char *s)
{
	int chars, count, i;
	char tmp, *tp;

	tp = s;
	chars = 0;

	while (*s != '\0')
	{
		s++;
		chars++;
	}
	s--;

	if (chars % 2 == 0)
		count = chars / 2;
	else
		count = (chars - 1) / 2;

	for (i = 0; i < count; i++)
	{
		tmp = *tp;
		*tp = *s;
		*s = tmp;
		s--;
		tp++;
	}
}
