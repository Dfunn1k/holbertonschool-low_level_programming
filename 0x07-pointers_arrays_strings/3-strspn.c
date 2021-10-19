#include "main.h"
/**
 * _strspn - Function to gets the length of a prefix substring
 * @s: Parameter
 * @accept: Parameter
 * Return: Return value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int var;
	int count = 0;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		var = 0;
		for (j = 0 ; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				var = 1;
				break;
			}
		}
		if (var == 1)
		{
			count++;
		} else
		{
			break;
		}
	}
	return (count);
}
