#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: This is the first string to be compared
 * @s2: This is the second string to be compared
 * Return:
 * if Return value < 0 then it indicates str1 is less than str2.
 * if Return value > 0 then it indicates str2 is less than str1.
 * if Return value = 0 then it indicates str1 is equal to str2.
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;

	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] == s2[x])
			x++;
		else if (s1[x] > s2[x])
			return (s1[x] - s2[x]);
		else
			return (s2[x] - s1[x]);
	}

	return (0);
}
