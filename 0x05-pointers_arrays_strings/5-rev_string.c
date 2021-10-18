#include "main.h"
/**
 *rev_string - Function reverses a string
 *@s: a string
 */
void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	int c;

	while (s[i] != 0)
	{
		i++;
	}

	while (a < i)
	{
		i -= 1;
		c = s[i];
		s[i] = s[a];
		s[a] = c;
		a++;
	}
}
