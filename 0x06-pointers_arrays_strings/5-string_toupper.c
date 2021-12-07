#include "main.h"
/**
 * string_toupper - Function to concatenates two strings
 * @x: Parameter
 * Return: Return value
 */
char *string_toupper(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] >= 65 && x[i] <= 90)
		{
			x[i] = x[i];
		} else if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		} else
		{
			x[i] = x[i];
		}
		i++;
	}
	return (x);
}
