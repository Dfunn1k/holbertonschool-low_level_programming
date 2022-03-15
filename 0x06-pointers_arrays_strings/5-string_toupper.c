#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	int i;
	char *tmpp;

	tmpp = s;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s < 123 && *s > 96)
			*s -= 32;
		s++;
	}

	return (tmpp);
}
