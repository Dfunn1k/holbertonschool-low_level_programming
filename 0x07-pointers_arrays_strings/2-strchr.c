#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character c that must be found
 * Return: pointer to the first ocurrence of the character and 0 if not found
 */

char *_strchr(char *s, char c)
{
	int i, count;
	char *tmpp;

	count = 1;
	tmpp = s;

	while (*tmpp != '\0')
	{
		count++;
		tmpp++;
	}
	for (i = 0; i <= count; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
