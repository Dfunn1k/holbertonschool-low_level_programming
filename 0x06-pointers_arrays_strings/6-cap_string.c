#include "main.h"
/**
 * cap_string - Function to capitalizes all words of a string
 * @x: Parameter
 * Return: Return value
 */
char *cap_string(char *x)
{
	int i;
	int j;

	i = 0;
	while (x[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i - 1 ; j++)
	{
		if ((x[j] == ' ' || x[j] == '\t' || x[j] == '\n'
		|| x[j] == ',' || x[j] == ';' || x[j] == '.'
		|| x[j] == '!' || x[j] == '?' || x[j] == '"'
		|| x[j] == '(' || x[j] == ')' || x[j] == '{'
		|| x[j] == '}') && (x[j + 1] > 96 && x[j + 1] < 123))
		{
			x[j + 1] = x[j + 1] - 32;
		}
		if (x[0] > 96 && x[0] < 123)
		{
			x[0] = x[0] - 32;
		}
	}
	return (x);
}
