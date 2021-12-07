#include "main.h"
/**
 *_strcmp - Function to compare two strings
 * @s1: Parameter
 * @s2: Parameter
 * Return: Return value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int r;

	i = 0;
	j = 0;
	r = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		while (s1[r] == s2[r])
		{
			r++;
		}
	} else if (i < j)
	{
		while (s1[r] == s2[r])
		{
			r++;
		}
	} else
	{
		while (s1[r] == s2[r] && s1[r] == '\0')
		{
			r++;
		}
	}
	return (s1[r] - s2[r]);
}
