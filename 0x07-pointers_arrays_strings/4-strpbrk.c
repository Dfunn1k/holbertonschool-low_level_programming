#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string where the occurrences should be searched
 * @accept: the string that will be found in s
 * Return: a pointer in the first ocurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *tmpp;

	tmpp = accept;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; *accept != '\0'; j++)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = tmpp;
		s++;
	}
	return (0);
}
