#include "main.h"
/**
 * _strchr - Function to fills memory with a constant byte
 * @s: Parameter
 * @c: Parameter
 * Return: Return value
 */
char *_strchr(char *s, char c)
{
	if (s[0] == c)
	{
		return (s);
	}
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
