#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the sitrng that be should searches
 * @needle: the substring that be found
 * Return: a pointer to first substring ocurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *tmpp;

	j = 0;

	for (i = 0; *haystack != '\0'; i++)
	{
		if (needle[j] == *haystack)
		{
			if (j == 0)
				tmpp = haystack;
			j++;
			if (needle[j] == '\0')
				return (tmpp);
		}
		else
			j = 0;
		haystack++;
	}
	return (0);
}
