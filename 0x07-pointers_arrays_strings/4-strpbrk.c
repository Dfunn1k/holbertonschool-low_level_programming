#include "main.h"

/**
 * @brief
 *
 * @param s
 * @param accept
 * @return char*
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