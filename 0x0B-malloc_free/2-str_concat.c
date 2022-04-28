#include "main.h"
#include "stdlib.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to strings concatenates
 */

char *str_concat(char *s1, char *s2)
{
	int i, tmp, counts1 = 0, counts2 = 0;
	char *cp;

	while (s1[counts1] != '\0')
		counts1++;

	while (s2[counts2] != '\0')
		counts2++;

	cp = malloc((counts1 + counts2 + 1) * sizeof(char));

	if (cp == NULL)
		return (NULL);

	for (i = 0; i < counts1; i++)
		cp[i] = s1[i];

	tmp = i;

	for (i = 0; i <= (counts2 + 1); i++)
	{
		if (i == counts2)
			cp[tmp] = '\0';
		else
			cp[tmp] = s2[i];
		tmp++;
	}
	return (cp);
}
