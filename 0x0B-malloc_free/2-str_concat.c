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
	int i, tmp, lens1, lens2;
	char *cp;

	for (lens1 = 0; s1 && *(s1 + lens1) != 0; lens1++)
		;
	for (lens2 = 0; s2 && *(s2 + lens2) != '\0'; lens2++)
		;

	cp = malloc((lens1 + lens2 + 1) * sizeof(char));

	if (cp == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		cp[i] = s1[i];

	tmp = i;

	for (i = 0; i <= lens2; i++)
	{
		if (i == lens2)
			cp[tmp] = '\0';
		else
			cp[tmp] = s2[i];
		tmp++;
	}
	return (cp);
}
