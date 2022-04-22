#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character c that must be found
 * Return: pointer to the first ocurrence of the character and 0 if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; c != 0; i++)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
