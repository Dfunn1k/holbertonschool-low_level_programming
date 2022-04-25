#include "main.h"

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: the string
 * @accept: the number of bytes in the initial segment of s
 * Return: the number of bytes in the initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;
	unsigned int count;
	char *tmpp;

	tmpp = accept;
	match = 0;
	count = 0;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; *accept != '\0'; j++)
		{
			if (*accept == *s)
			{
				if (count == 0)
					match = i;
				else
					match++;
				count++;
				break;
			}
			else
				accept++;
		}
		if (match != i)
			break;
		accept = tmpp;
		s++;
	}

	return (count);
}
