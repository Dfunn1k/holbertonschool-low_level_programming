#include "holberton.h"
/**
 * _strcpy - Function to print a complete string in reverse
 * @dest: Parameter
 * @src: Parameter
 * Return: Return value "dest"
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int a;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	a = 0;
		for (a = 0; a <= i ; a++)
		{
			dest[a] = src[a];
		}
		return (dest);
}
