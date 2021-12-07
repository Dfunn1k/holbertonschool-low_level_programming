#include "main.h"
/**
 *_strncat - Function to concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
